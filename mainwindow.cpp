#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupWindow();
    setupPushButton();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setupWindow()
{

    ui->window->setStyleSheet(
        "border: 3px solid black;"
        "font-size: 60px");

}

void MainWindow::updateWindow()
{

    if(state == State::InputA)
    {

        ui->window->setText(a);

    }
    else if(state == State::InputAction)
    {

        ui->window->setText(action);

    }
    else if(state == State::InputB)
    {

        ui->window->setText(b);

    }


}


void MainWindow::updateWindow(const double result)
{

    ui->window->setText(QString::number(result));

}


void MainWindow::updateWindow(QString message)
{

    ui->window->setText(message);

}


void MainWindow::setupPushButton()
{
    QString texts[16]
    {
        "0", "Clear", "/", "*",
        "1", "2", "3", "-",
        "4", "5", "6", "+",
        "7", "8", "9", "="
    };

    for(int i = 0; i < 16; i++)
    {
        QString name = "push_" + QString::number(i);

        QPushButton* button = findChild<QPushButton*>(name);

        if(button)
        {

            button->setSizePolicy(
                QSizePolicy::Expanding,
                QSizePolicy::Expanding
                );

            button->setText(texts[i]);
        }
    }

}


void MainWindow::appendDigit(const QString digit)
{

    if(!action.isEmpty() && state != State::Result)
    {
        state = State::InputB;
    }

    if(state == State::InputA)
    {

        if(a == "0")
        {

            a = digit;

        }
        else
        {

            a.append(digit);

        }

    }
    else if(state == State::InputB)
    {
        if(b == "0")
        {

            b = digit;

        }
        else
        {

            b.append(digit);

        }
    }

    updateWindow();

}


void MainWindow::setAction(const QString action)
{

    if(!a.isEmpty() && b.isEmpty()) { state = State::InputAction; }

    if(state == State::InputAction){ this->action = action; }
    updateWindow();

}


void MainWindow::on_push_1_clicked()
{

    a.clear();
    b.clear();
    action.clear();
    state = State::InputA;

    updateWindow();

}


void MainWindow::on_push_2_clicked()
{

    setAction("/");

}


void MainWindow::on_push_3_clicked()
{
    setAction("*");

}


void MainWindow::on_push_7_clicked()
{

    setAction("-");

}


void MainWindow::on_push_11_clicked()
{

    setAction("+");

}


void MainWindow::on_push_0_clicked()
{

    appendDigit("0");

}


void MainWindow::on_push_4_clicked()
{
    appendDigit("1");

}


void MainWindow::on_push_5_clicked()
{

    appendDigit("2");

}


void MainWindow::on_push_6_clicked()
{

    appendDigit("3");

}


void MainWindow::on_push_8_clicked()
{

    appendDigit("4");

}


void MainWindow::on_push_9_clicked()
{

    appendDigit("5");

}


void MainWindow::on_push_10_clicked()
{

    appendDigit("6");

}


void MainWindow::on_push_12_clicked()
{

    appendDigit("7");

}


void MainWindow::on_push_13_clicked()
{

    appendDigit("8");

}


void MainWindow::on_push_14_clicked()
{

    appendDigit("9");

}


void MainWindow::on_push_15_clicked()
{

    if(!b.isEmpty())
    {

        state = State::Result;

    }

    if(state == State::Result)
    {

        double result;

        if(action == "+")
        {

            result = a.toDouble() + b.toDouble();

        }
        else if(action == "-")
        {

            result = a.toDouble() - b.toDouble();

        }
        else if(action == "*")
        {

            result = a.toDouble() * b.toDouble();

        }
        else if(action == "/")
        {
            if(b == "0")
            {

                updateWindow("ERROR");
                return;
            }
            result = a.toDouble() / b.toDouble();

        }

        updateWindow(result);

    }
}

