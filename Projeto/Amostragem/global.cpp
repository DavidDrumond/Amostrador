#include "global.h"
#include<time.h>
#include <stdio.h>
#include<stdlib.h>
#include<iostream>



void altere_matriz(double matriz[8][8]){
    srand(time(NULL));
    float aleatorio;
    for (int i=0; i<8; i++){
        for(int j=0;j<8; j++){
            aleatorio = (rand()%3-1)*(rand() * 100.00/RAND_MAX)/100;
            matriz[i][j] = matriz[i][j] + aleatorio;
        }
    }

}


global::global()
{

    srand((unsigned)time(0)); //para gerar números aleatórios reais.
    int maior = 4;
    int menor = 1;
    int tipo_deposito = rand()%(maior-menor+1) + menor;


    contador = 0;

    amostras[0] = 0;
    amostras[1] = 0;
    amostras[2] = 0;
    amostras[3] = 0;
    amostras[4] = 0;
    amostras[5] = 0;
    amostras[6] = 0;
    amostras[7] = 0;
    amostras[8] = 0;
    amostras[9] = 0;


    if (tipo_deposito == 1){

        // Defina a matriz dos dados

        matriz[0][0] = 5.6; matriz[0][1] = 2.5; matriz[0][2] = 2.5; matriz[0][3] = 2.5; matriz[0][4] = 2.5; matriz[0][5] = 2.5; matriz[0][6] = 2.5; matriz[0][7] = 2.5;
        matriz[1][0] = 5.6; matriz[1][1] = 5.6; matriz[1][2] = 2.5; matriz[1][3] = 2.5; matriz[1][4] = 2.5; matriz[1][5] = 2.5; matriz[1][6] = 2.5; matriz[1][7] = 2.5;
        matriz[2][0] = 2.5; matriz[2][1] = 5.6; matriz[2][2] = 5.6; matriz[2][3] = 2.5; matriz[2][4] = 2.5; matriz[2][5] = 2.5; matriz[2][6] = 2.5; matriz[2][7] = 2.5;
        matriz[3][0] = 2.5; matriz[3][1] = 2.5; matriz[3][2] = 5.6; matriz[3][3] = 5.6; matriz[3][4] = 2.5; matriz[3][5] = 5.6; matriz[3][6] = 2.5; matriz[3][7] = 2.5;
        matriz[4][0] = 2.5; matriz[4][1] = 2.5; matriz[4][2] = 5.6; matriz[4][3] = 5.6; matriz[4][4] = 5.6; matriz[4][5] = 5.6; matriz[4][6] = 2.5; matriz[4][7] = 2.5;
        matriz[5][0] = 2.5; matriz[5][1] = 2.5; matriz[5][2] = 2.5; matriz[5][3] = 2.5; matriz[5][4] = 5.6; matriz[5][5] = 5.6; matriz[5][6] = 5.6; matriz[5][7] = 2.5;
        matriz[6][0] = 2.5; matriz[6][1] = 2.5; matriz[6][2] = 2.5; matriz[6][3] = 2.5; matriz[6][4] = 2.5; matriz[6][5] = 2.5; matriz[6][6] = 5.6; matriz[6][7] = 5.6;
        matriz[7][0] = 2.5; matriz[7][1] = 2.5; matriz[7][2] = 2.5; matriz[7][3] = 2.5; matriz[7][4] = 2.5; matriz[7][5] = 2.5; matriz[7][6] = 2.5; matriz[7][7] = 5.6;

    }

    if (tipo_deposito == 2){

        // Defina a matriz dos dados

        matriz[0][0] = 2.0; matriz[0][1] = 2.5; matriz[0][2] = 6.0; matriz[0][3] = 2.5; matriz[0][4] = 2.5; matriz[0][5] = 2.5; matriz[0][6] = 2.5; matriz[0][7] = 2.5;
        matriz[1][0] = 2.0; matriz[1][1] = 2.5; matriz[1][2] = 7.0; matriz[1][3] = 4.0; matriz[1][4] = 2.5; matriz[1][5] = 2.5; matriz[1][6] = 2.5; matriz[1][7] = 2.5;
        matriz[2][0] = 2.0; matriz[2][1] = 2.5; matriz[2][2] = 8.0; matriz[2][3] = 7.0; matriz[2][4] = 6.0; matriz[2][5] = 8.0; matriz[2][6] = 2.5; matriz[2][7] = 2.5;
        matriz[3][0] = 2.5; matriz[3][1] = 2.5; matriz[3][2] = 6.0; matriz[3][3] = 10.0; matriz[3][4] = 7.0; matriz[3][5] = 5.6; matriz[3][6] = 2.5; matriz[3][7] = 2.5;
        matriz[4][0] = 2.5; matriz[4][1] = 2.5; matriz[4][2] = 8.0; matriz[4][3] = 8.0; matriz[4][4] = 5.6; matriz[4][5] = 8.0; matriz[4][6] = 2.5; matriz[4][7] = 2.5;
        matriz[5][0] = 2.5; matriz[5][1] = 2.5; matriz[5][2] = 7.0; matriz[5][3] = 5.6; matriz[5][4] = 5.6; matriz[5][5] = 5.6; matriz[5][6] = 2.5; matriz[5][7] = 2.5;
        matriz[6][0] = 2.5; matriz[6][1] = 2.5; matriz[6][2] = 2.5; matriz[6][3] = 2.5; matriz[6][4] = 2.5; matriz[6][5] = 2.5; matriz[6][6] = 2.5; matriz[6][7] = 2.5;
        matriz[7][0] = 2.5; matriz[7][1] = 2.5; matriz[7][2] = 2.5; matriz[7][3] = 2.5; matriz[7][4] = 2.5; matriz[7][5] = 2.5; matriz[7][6] = 2.5; matriz[7][7] = 2.5;

    }

    if (tipo_deposito == 3){

        // Defina a matriz dos dados

        matriz[0][0] = 2.5; matriz[0][1] = 2.5; matriz[0][2] = 2.5; matriz[0][3] = 2.5; matriz[0][4] = 2.5; matriz[0][5] = 2.5; matriz[0][6] = 2.5; matriz[0][7] = 2.5;
        matriz[1][0] = 2.5; matriz[1][1] = 2.5; matriz[1][2] = 2.5; matriz[1][3] = 2.5; matriz[1][4] = 2.5; matriz[1][5] = 2.5; matriz[1][6] = 2.5; matriz[1][7] = 2.5;
        matriz[2][0] = 2.5; matriz[2][1] = 2.5; matriz[2][2] = 2.5; matriz[2][3] = 2.5; matriz[2][4] = 2.5; matriz[2][5] = 2.5; matriz[2][6] = 2.5; matriz[2][7] = 2.5;
        matriz[3][0] = 2.5; matriz[3][1] = 2.5; matriz[3][2] = 2.5; matriz[3][3] = 2.5; matriz[3][4] = 2.5; matriz[3][5] = 2.5; matriz[3][6] = 2.5; matriz[3][7] = 2.5;
        matriz[4][0] = 2.5; matriz[4][1] = 2.5; matriz[4][2] = 2.5; matriz[4][3] = 2.5; matriz[4][4] = 2.5; matriz[4][5] = 2.5; matriz[4][6] = 2.5; matriz[4][7] = 2.5;
        matriz[5][0] = 2.5; matriz[5][1] = 2.5; matriz[5][2] = 2.5; matriz[5][3] = 2.5; matriz[5][4] = 2.5; matriz[5][5] = 2.5; matriz[5][6] = 2.5; matriz[5][7] = 2.5;
        matriz[6][0] = 2.5; matriz[6][1] = 2.5; matriz[6][2] = 2.5; matriz[6][3] = 2.5; matriz[6][4] = 2.5; matriz[6][5] = 2.5; matriz[6][6] = 2.5; matriz[6][7] = 2.5;
        matriz[7][0] = 2.5; matriz[7][1] = 2.5; matriz[7][2] = 2.5; matriz[7][3] = 2.5; matriz[7][4] = 2.5; matriz[7][5] = 2.5; matriz[7][6] = 2.5; matriz[7][7] = 2.5;

    }

    if (tipo_deposito == 4){

        // Defina a matriz dos dados

        matriz[0][0] = 2.5; matriz[0][1] = 2.5; matriz[0][2] = 2.5; matriz[0][3] = 2.5; matriz[0][4] = 2.5; matriz[0][5] = 2.5; matriz[0][6] = 2.5; matriz[0][7] = 5.6;
        matriz[1][0] = 2.5; matriz[1][1] = 2.5; matriz[1][2] = 2.5; matriz[1][3] = 2.5; matriz[1][4] = 2.5; matriz[1][5] = 5.6; matriz[1][6] = 5.6; matriz[1][7] = 5.6;
        matriz[2][0] = 2.5; matriz[2][1] = 2.5; matriz[2][2] = 2.5; matriz[2][3] = 2.5; matriz[2][4] = 5.6; matriz[2][5] = 5.6; matriz[2][6] = 5.6; matriz[2][7] = 2.5;
        matriz[3][0] = 2.5; matriz[3][1] = 2.5; matriz[3][2] = 5.6; matriz[3][3] = 5.6; matriz[3][4] = 5.6; matriz[3][5] = 5.6; matriz[3][6] = 5.6; matriz[3][7] = 2.5;
        matriz[4][0] = 2.5; matriz[4][1] = 2.5; matriz[4][2] = 5.6; matriz[4][3] = 5.6; matriz[4][4] = 5.6; matriz[4][5] = 2.5; matriz[4][6] = 2.5; matriz[4][7] = 2.5;
        matriz[5][0] = 2.5; matriz[5][1] = 5.6; matriz[5][2] = 5.6; matriz[5][3] = 2.5; matriz[5][4] = 2.5; matriz[5][5] = 2.5; matriz[5][6] = 2.5; matriz[5][7] = 2.5;
        matriz[6][0] = 5.6; matriz[6][1] = 5.6; matriz[6][2] = 2.5; matriz[6][3] = 2.5; matriz[6][4] = 2.5; matriz[6][5] = 2.5; matriz[6][6] = 2.5; matriz[6][7] = 2.5;
        matriz[7][0] = 5.6; matriz[7][1] = 2.5; matriz[7][2] = 2.5; matriz[7][3] = 2.5; matriz[7][4] = 2.5; matriz[7][5] = 2.5; matriz[7][6] = 2.5; matriz[7][7] = 2.5;

    }


    // Defina a matriz de tiros

    tiro[0][0] = 0; tiro[0][1] = 0; tiro[0][2] = 0; tiro[0][3] = 0; tiro[0][4] = 0; tiro[0][5] = 0; tiro[0][6] = 0; tiro[0][7] = 0;
    tiro[1][0] = 0; tiro[1][1] = 0; tiro[1][2] = 0; tiro[1][3] = 0; tiro[1][4] = 0; tiro[1][5] = 0; tiro[1][6] = 0; tiro[1][7] = 0;
    tiro[2][0] = 0; tiro[2][1] = 0; tiro[2][2] = 0; tiro[2][3] = 0; tiro[2][4] = 0; tiro[2][5] = 0; tiro[2][6] = 0; tiro[2][7] = 0;
    tiro[3][0] = 0; tiro[3][1] = 0; tiro[3][2] = 0; tiro[3][3] = 0; tiro[3][4] = 0; tiro[3][5] = 0; tiro[3][6] = 0; tiro[3][7] = 0;
    tiro[4][0] = 0; tiro[4][1] = 0; tiro[4][2] = 0; tiro[4][3] = 0; tiro[4][4] = 0; tiro[4][5] = 0; tiro[4][6] = 0; tiro[4][7] = 0;
    tiro[5][0] = 0; tiro[5][1] = 0; tiro[5][2] = 0; tiro[5][3] = 0; tiro[5][4] = 0; tiro[5][5] = 0; tiro[5][6] = 0; tiro[5][7] = 0;
    tiro[6][0] = 0; tiro[6][1] = 0; tiro[6][2] = 0; tiro[6][3] = 0; tiro[6][4] = 0; tiro[6][5] = 0; tiro[6][6] = 0; tiro[6][7] = 0;
    tiro[7][0] = 0; tiro[7][1] = 0; tiro[7][2] = 0; tiro[7][3] = 0; tiro[7][4] = 0; tiro[7][5] = 0; tiro[7][6] = 0; tiro[7][7] = 0;

    altere_matriz(matriz);


    double soma;

    for (int i = 1; i < 8; i++){
        for (int j = 1; j < 8; j++){
            soma = soma + matriz[i][j];
        }
    }

    media = soma/64.00;

}



