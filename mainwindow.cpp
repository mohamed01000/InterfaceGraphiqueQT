#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->label->setStyleSheet("QLabel { background-color : white; color : blue; }");
    ui->label_2->setStyleSheet("QLabel { background-color : white; color : blue; }");
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

    QString stringVal ;
    double  intVal ;

  //  intVal = (ui->label->text() + ui->pushButtonPoint->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
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

    intVal = (ui->label->text() + ui->pushButton_3->text()).toDouble();

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
   QString stringVal ;

   double val;
   val = ui->label->text().toDouble() * 6.55957;
   stringVal = QString::number(val,'g',15);

   ui->label_2->setText(stringVal );
}

void MainWindow::on_pushButton_7_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_7->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_4_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_4->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_5->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_6->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_8->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ui->pushButton_9->text()).toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButtonPoint_clicked()
{
    QString stringVal ;
    double  intVal ;

    intVal = (ui->label->text() + ".").toDouble();

    stringVal = QString::number(intVal,'g',15);
    ui->label->setText(stringVal);
}

void MainWindow::on_pushButtonVirgule_clicked()
{
  ui->label->setText(ui->label->text() + ".");
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->label->clear();
    ui->label_2->clear();
}
