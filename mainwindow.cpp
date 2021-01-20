#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
   ui->label->setStyleSheet("QLabel { background-color : red; color : blue; }");
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


}

void MainWindow::on_pushButton_2_clicked()
{

    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_2->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_1->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_1_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_1->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButtonConvertir_clicked()
{
    int i ;
    int d = 10 ;

    QString str;
    str.setNum(d);
    QString texte = ui->TFrancs->toPlainText();
    i=texte.toInt();
    i= i+d;
    str.setNum(i);
    ui->TextEuros->setPlainText(str);

   // ui->TextEuros->setText(var);

}
