#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "caculate.h"
#include<QtDebug>
#include<QLayout>
#include<QFont>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    caculate1 = new caculate;
    tempString = " ";

    int width = this->geometry().width();
    int height = this->geometry().height();
    this->setFixedSize(width/2,height/1.5);

 /*   connect(this->ui->btn_0,SIGNAL(clicked(bool)),this,SLOT(on_btn_0_clicked()));
    connect(this->ui->btn_1,SIGNAL(clicked(bool)),this,SLOT(on_btn_1_clicked()));
    connect(this->ui->btn_2,SIGNAL(clicked(bool)),this,SLOT(on_btn_2_clicked()));
    connect(this->ui->btn_3,SIGNAL(clicked(bool)),this,SLOT(on_btn_3_clicked()));
    connect(this->ui->btn_4,SIGNAL(clicked(bool)),this,SLOT(on_btn_4_clicked()));
    connect(this->ui->btn_5,SIGNAL(clicked(bool)),this,SLOT(on_btn_5_clicked()));
    connect(this->ui->btn_6,SIGNAL(clicked(bool)),this,SLOT(on_btn_6_clicked()));
    connect(this->ui->btn_7,SIGNAL(clicked(bool)),this,SLOT(on_btn_7_clicked()));
    connect(this->ui->btn_8,SIGNAL(clicked(bool)),this,SLOT(on_btn_8_clicked()));
    connect(this->ui->btn_9,SIGNAL(clicked(bool)),this,SLOT(on_btn_9_clicked()));

    connect(this->ui->btn_div,SIGNAL(clicked(bool)),this,SLOT(on_btn_div_clicked()));
    connect(this->ui->btn_plu,SIGNAL(clicked(bool)),this,SLOT(on_btn_plu_clicked()));
    connect(this->ui->btn_equ,SIGNAL(clicked(bool)),this,SLOT(on_btn_equ_clicked()));
    connect(this->ui->btn_sub,SIGNAL(clicked(bool)),this,SLOT(on_btn_sub_clicked()));
    connect(this->ui->btn_mul,SIGNAL(clicked(bool)),this,SLOT(on_btn_mul_clicked()));*/
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_0_clicked()
{
    tempString+="0";
    this->ui->label->clear();
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_1_clicked()
{
    tempString+="1";
//    qDebug()<<tempString<<" "<<this->ui->label->text()<<"------------";
    this->ui->label->clear();
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_2_clicked()
{
    tempString+="2";
    this->ui->label->clear();
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_3_clicked()
{
    tempString+="3";
    this->ui->label->clear();
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_4_clicked()
{
    tempString+="4";
    this->ui->label->setText(tempString);
}
void MainWindow::on_btn_5_clicked()
{
    tempString+="5";
    this->ui->label->setText(tempString);
}
void MainWindow::on_btn_6_clicked()
{
    tempString+="6";
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_7_clicked()
{
    tempString+="7";
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_8_clicked()
{
    tempString+="8";
    this->ui->label->setText(tempString);
}

void MainWindow::on_btn_9_clicked()
{
    tempString+="9";
    this->ui->label->setText(tempString);
}


void MainWindow::on_btn_mul_clicked()
{
    double x =tempString .toDouble();
    qDebug()<<tempString<<" "<<tempString.toDouble();
    caculate1->num1 = x;
    caculate1->type = "*";
    tempString = "";
}

void MainWindow::on_btn_plu_clicked()
{
    double x =tempString .toDouble();
    caculate1->num1 = x;
    caculate1->type = "+";

    tempString = "";
}

void MainWindow::on_btn_sub_clicked()
{
    double x =tempString .toDouble();
    caculate1->num1 = x;
    caculate1->type = "-";

    tempString = "";
}

void MainWindow::on_btn_div_clicked()
{
    double x =tempString .toDouble();
    caculate1->num1 = x;

    caculate1->type = "/";
    tempString = "";
}

void MainWindow::on_btn_equ_clicked()
{
    double x =tempString.toDouble();
    caculate1->num2 = x;
    if(caculate1->type!='/'||caculate1->num2!='0')
    tempString = QString::number(caculate1->Ans(), '.', 2);
    else
        tempString = "ERROR";


    this->ui->label->setText(tempString);
     qDebug()<<caculate1->num1<<" "<<caculate1->num2<<" "<<tempString;
    tempString ="";
}



void MainWindow::on_btn_point_clicked()
{
    tempString+=".";
    this->ui->label->clear();
    this->ui->label->setText(tempString);
}
