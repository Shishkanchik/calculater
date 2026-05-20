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
    else if(state == State::InputAction && !action.isEmpty())
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

    const int COUNT_PUSH_BUTTON = 18;

    QString texts[COUNT_PUSH_BUTTON]
    {
        "0", "Clear", "/", "*",
        "1", "2", "3", "-",
        "4", "5", "6", "+",
        "7", "8", "9", "=",
        ".", "+/-"
    };

    for(int i = 0; i < COUNT_PUSH_BUTTON; i++)
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

        if(a == "0" || a == "-0")
        {

            if(a == "0")
            {

                a = digit;

            }
            else if(a == "-0")
            {

                a = digit;
                a.prepend("-");

            }

        }
        else
        {

            a.append(digit);

        }

    }
    else if(state == State::InputB)
    {
        if(b == "0" || b == "-0")
        {

            if(b == "0")
            {

                b = digit;

            }
            else if(b == "-0")
            {

                b = digit;
                b.prepend("-");

            }

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
    result = 0;
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
        a = QString::number(result);
        state = State::InputAction;
        b.clear();
        action.clear();

    }
}


void MainWindow::on_push_16_clicked()
{
    bool isDoubleA = a.contains(".");
    bool isDoubleB = b.contains(".");

    if(state == State::InputA && !a.isEmpty() && !isDoubleA)
    {

        a.append(".");

    }
    else if(state == State::InputB && !b.isEmpty() && !isDoubleB)
    {

        b.append(".");

    }

    updateWindow();
}


void MainWindow::on_push_17_clicked()
{

    if(state == State::InputA)
    {
        bool isNegativeA = a.contains("-");

        if(isNegativeA)
        {

            a.removeFirst();

        }
        else if(a.isEmpty())
        {

            a.prepend("-0");

        }
        else
        {

            a.prepend("-");

        }

    }
    else if(state == State::InputB || (state == State::InputAction && !action.isEmpty()))
    {
        if(state == State::InputAction && !action.isEmpty())
        {

            state = State::InputB;

        }

        bool isNegativeB = b.contains("-");

        if(isNegativeB)
        {

            b.removeFirst();

        }
        else if(b.isEmpty())
        {

            b.prepend("-0");

        }
        else
        {

            b.prepend("-");

        }

    }

    updateWindow();

}

