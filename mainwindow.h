#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_push_0_clicked();

    void on_push_1_clicked();

    void on_push_2_clicked();

    void on_push_3_clicked();

    void on_push_7_clicked();

    void on_push_11_clicked();

    void on_push_4_clicked();

    void on_push_5_clicked();

    void on_push_6_clicked();

    void on_push_8_clicked();

    void on_push_9_clicked();

    void on_push_10_clicked();

    void on_push_12_clicked();

    void on_push_13_clicked();

    void on_push_14_clicked();

    void on_push_15_clicked();

    void on_push_16_clicked();

    void on_push_17_clicked();

private:
    enum class State
    {

        InputA,
        InputAction,
        InputB,
        Result

    };

    State state = State::InputA;
    QString a;
    QString b;
    QString action;
    double result = 0;

    Ui::MainWindow *ui;
    void updateWindow();
    void updateWindow(double result);
    void updateWindow(QString message);
    void setupWindow();
    void setupPushButton();
    void appendDigit(const QString digit);
    void setAction(const QString action);
};
#endif // MAINWINDOW_H
