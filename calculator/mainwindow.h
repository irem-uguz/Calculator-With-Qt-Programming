#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
//in MainWindow.cpp, slots are explained in details
private slots:
    void dec();
    void clear();
    void div();
    void _9();
    void hex();
    void eq();
    void mult();
    void plus();
    void sub();
    void _0();
    void _1();
    void _2();
    void _3();
    void _4();
    void _5();
    void _6();
    void _7();
    void _8();
    void _a();
    void _b();
    void _c();
    void _d();
    void _e();
    void _f();

private:
    //Ui is the user interface, includes buttons and LCDNumber created with QT designer
    Ui::MainWindow *ui;
    /*
     * boolean start is a control boolean
     * if the clicked button is the very first digit of the a number, it is true; else false
     * helps to display numbers on screen
     */
    bool start=true;
    /*
     * boolean isHex is a control boolean
     * when calculator is in hex mode it is true;else it is false
     * helps to control the value on the screen, since LCDNumber holds the value in decimal and changing its mode only controls the displayed value
     */
    bool isHex=false;
    /*
     *int result is the result of the operations entered
     *it is updated after every operation
     */
    int result=0;
    /*
     * lastOp is a control integer
     * if it is -1 means there is not any operation that called or the last operator called is equal sign
     * if it is 0 means the last operation called is subtraction
     * if it is 1 means the last operation called is addition
     * if it is 2 means the last operation called is multiplication
     * if it is 3 means the last operation called is division
     */
    int lastOp=-1;
};

#endif // MAINWINDOW_H
