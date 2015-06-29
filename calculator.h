#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

namespace Ui {
class Calculator;
}

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    explicit Calculator(QWidget *parent = 0);
    ~Calculator();





private slots:
    //numbers

    void ClickZero();
    void ClickOne();
    void ClickTwo();
    void ClickThree();
    void ClickFour();
    void ClickFive();
    void ClickSix();
    void ClickSeven();
    void ClickEight();
    void ClickNine();



    void ClickDot();
    void ClickEquel();



private:
    Ui::Calculator *ui;
};

#endif // CALCULATOR_H
