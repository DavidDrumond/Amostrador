#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<stdlib.h>
#include<iostream>
#include<QMessageBox>
#include "global.h"
#include<time.h>
#include <stdio.h>
#include<stdlib.h>





MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);







}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{


    QModelIndexList selecionados = ui->tableWidget->selectionModel()->selectedIndexes();
    QModelIndex item =  selecionados.at(0);
    int linha = item.row();
    int coluna = item.column();

    //linha = linha - 1;
    //coluna = coluna - 1;

    if (glob.contador < 10){
        if (glob.tiro[linha][coluna] == 0){

            glob.amostras[glob.contador] = glob.matriz[linha][coluna];
            glob.contador = glob.contador + 1;
            QString x = "X . " + QString::number(glob.contador);
            ui->tableWidget->setItem(linha, coluna, new QTableWidgetItem(x));
            glob.tiro[linha][coluna] = 1;
            ui->listWidget->addItem("Amostra " + QString::number(glob.contador)+ "-->  " + QString::number(glob.matriz[linha][coluna]));

        }else{
            QMessageBox msgBox;
            msgBox.setText("A amostragem já foi feita neste local");
            msgBox.exec();
        }
    }
    if (glob.contador == 10){
        glob.contador = glob.contador + 1;
        ui->listWidget->addItem("---------------------");
        ui->listWidget->addItem("Media global --> " + QString::number(glob.media));
        double soma = 0;
        for (int i = 1; i < 10; i++){
            soma = soma + glob.amostras[i];
        }

        ui->listWidget->addItem("Media amostral --> " + QString::number(soma/10));
        ui->listWidget->addItem("Desvio percentual --> " + QString::number((soma/10 - glob.media)/glob.media*100)+ "%");

    }



}
