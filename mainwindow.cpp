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


void MainWindow::on_MonBouton_clicked()
{
    close();
}


void MainWindow::on_pushButton_clicked()
{
    QString var = "toto" ;
    int i ;
    int d = 10;

    QString str;
    str.setNum(d);
    QString texte = ui->TFrancs->toPlainText();
    i=texte.toInt();
    i= i+d;
    str.setNum(i);
    ui->TextEuros->setPlainText(str);

   // ui->TextEuros->setText(var);

}
