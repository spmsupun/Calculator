#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calculator)
{
    ui->setupUi(this);





     connect(ui->btn0, SIGNAL(clicked()), this, SLOT( ClickZero()));
     connect(ui->btn1, SIGNAL(clicked()), this, SLOT( ClickOne()));
     connect(ui->btn2, SIGNAL(clicked()), this, SLOT( ClickTwo()));
     connect(ui->btn3, SIGNAL(clicked()), this, SLOT( ClickThree()));
     connect(ui->btn4, SIGNAL(clicked()), this, SLOT( ClickFour()));
     connect(ui->btn5, SIGNAL(clicked()), this, SLOT( ClickFive()));
     connect(ui->btn6, SIGNAL(clicked()), this, SLOT( ClickSix()));
     connect(ui->btn7, SIGNAL(clicked()), this, SLOT( ClickSeven()));
     connect(ui->btn8, SIGNAL(clicked()), this, SLOT( ClickEight()));
     connect(ui->btn9, SIGNAL(clicked()), this, SLOT( ClickNine()));



     connect(ui->btnDot, SIGNAL(clicked()), this, SLOT( ClickDot()));
     connect(ui->btnEql, SIGNAL(clicked()), this, SLOT( ClickEquel()));
}

Calculator::~Calculator()
{
    delete ui;
}


void Calculator::ClickZero(){

    ui->mainTextBox->setText( ui->mainTextBox->text() + "0");

}

void Calculator::ClickOne(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "1");
}
void Calculator::ClickTwo(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "2");
}
void Calculator::ClickThree(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "3");
}
void Calculator::ClickFour(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "4");
}
void Calculator::ClickFive(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "5");
}
void Calculator::ClickSix(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "6");
}
void Calculator::ClickSeven(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "7");
}
void Calculator::ClickEight(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "8");
}
void Calculator::ClickNine(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + "9");
}


void Calculator::ClickDot(){
    ui->mainTextBox->setText( ui->mainTextBox->text() + ".");
}

void Calculator::ClickEquel(){



}




