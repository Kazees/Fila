#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonGerar_clicked()
{
    int tamanho;

    try
    {
       tamanho=ui->lineEditTamanho->text().toInt();

        n1=new bry::Fila(tamanho);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
        ui->lineEditElementos->clear();
        ui->lineEditTamanho->clear();
    }
}


void MainWindow::on_pushButtonInserir_clicked()
{
    QString saida;

    try
    {

           saida+=QString::number(ui->lineEditElementos->text().toInt());

           n1->inserir(ui->lineEditElementos->text().toInt());


       ui->textEditResultado->setText(saida);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);

    }
}


void MainWindow::on_pushButtonRetirar_clicked()
{

    QString saida;

    try
    {
       n1->retirar();



       ui->textEditResultado->setText(saida);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);

    }

}


void MainWindow::on_pushButtonAcessar_clicked()
{
    QString saida;

    try
    {
        saida=QString::number(n1->acessar());

        ui->textEditResultado->setText(saida);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);

    }


}


void MainWindow::on_pushButtonMostrar_clicked()
{

}

