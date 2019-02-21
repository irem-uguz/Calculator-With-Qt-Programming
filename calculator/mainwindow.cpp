#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    //MainWindow is inherits from QWidget class and takes its parent as parameter.
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //setupUi method takes this object and makes it the user interface of application.
    ui->setupUi(this);
    //Decimal mode is the dafeult mode of our calculator so it is set at the declaration of object.
    ui->num->setDecMode();
    //When clear button is clicked, slot method clear() is called.
    connect(ui->clr,SIGNAL(clicked()),this,SLOT(clear())) ;
    //When dec button is clicked, slot method dec() is called.
    connect(ui->dec,SIGNAL(clicked()),this,SLOT(dec())) ;
    //When hex button is clicked, slot method hex() is called.
    connect(ui->hex,SIGNAL(clicked()),this,SLOT(hex())) ;
    //When + button is clicked, slot method plus() is called.
    connect(ui->plus,SIGNAL(clicked()),this,SLOT(plus())) ;
    //When - button is clicked, slot method sub() is called.
    connect(ui->sub,SIGNAL(clicked()),this,SLOT(sub())) ;
    //When * button is clicked, slot method mult() is called.
    connect(ui->mult,SIGNAL(clicked()),this,SLOT(mult())) ;
    //When / button is clicked, slot method div() is called.
    connect(ui->div,SIGNAL(clicked()),this,SLOT(div())) ;
    //When = button is clicked, slot method eq() is called.
    connect(ui->eq,SIGNAL(clicked()),this,SLOT(eq())) ;
    //When 0 button is clicked, slot method _0() is called.
    connect(ui->_0,SIGNAL(clicked()),this,SLOT(_0())) ;
    //When _1 button is clicked, slot method _1() is called.
    connect(ui->_1,SIGNAL(clicked()),this,SLOT(_1())) ;
    //When _2 button is clicked, slot method _2() is called.
    connect(ui->_2,SIGNAL(clicked()),this,SLOT(_2())) ;
    //When _3 button is clicked, slot method _3() is called.
    connect(ui->_3,SIGNAL(clicked()),this,SLOT(_3())) ;
    //When _4 button is clicked, slot method _4() is called.
    connect(ui->_4,SIGNAL(clicked()),this,SLOT(_4())) ;
    //When _5 button is clicked, slot method _5() is called.
    connect(ui->_5,SIGNAL(clicked()),this,SLOT(_5())) ;
    //When _6 button is clicked, slot method _6() is called.
    connect(ui->_6,SIGNAL(clicked()),this,SLOT(_6())) ;
    //When _7 button is clicked, slot method _7() is called.
    connect(ui->_7,SIGNAL(clicked()),this,SLOT(_7())) ;
    //When _8 button is clicked, slot method _8() is called.
    connect(ui->_8,SIGNAL(clicked()),this,SLOT(_8())) ;
    //When _9 button is clicked, slot method _9() is called.
    connect(ui->_9,SIGNAL(clicked()),this,SLOT(_9())) ;
    //When _a button is clicked, slot method _a() is called.
    connect(ui->_a,SIGNAL(clicked()),this,SLOT(_a())) ;
    //When _b button is clicked, slot method _b() is called.
    connect(ui->_b,SIGNAL(clicked()),this,SLOT(_b())) ;
    //When _c button is clicked, slot method _c() is called.
    connect(ui->_c,SIGNAL(clicked()),this,SLOT(_c())) ;
    //When _d button is clicked, slot method _d() is called.
    connect(ui->_d,SIGNAL(clicked()),this,SLOT(_d())) ;
    //When _e button is clicked, slot method _e() is called.
    connect(ui->_e,SIGNAL(clicked()),this,SLOT(_e())) ;
    //When _f button is clicked, slot method _f() is called.
    connect(ui->_f,SIGNAL(clicked()),this,SLOT(_f())) ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * This method is activated when clicked on clr button
 * Clears the screen and make the result 0
 */
void MainWindow::clear(){
    ui->num->display(0);
    start=true;
    lastOp=-1;
    result=0;
}
/*
 * This method is activated when clicked on dec button
 * Makes the mode of the calculator decimal, set the ui.num ' s mode decimal and makes isHex boolean false
 */
void MainWindow::dec(){
    this->isHex=false;
    ui->num->setDecMode();
}

/*
 * This method is activated when clicked on hex button
 * Makes the mode of the calculator hexadecimal, set the ui.num ' s mode hexadecimal and makes isHex boolean true
 */
void MainWindow::hex(){
    this->isHex=true;
    ui->num->setHexMode();
}
/*
 * This method is activated when 0 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 0 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 0 at the end of the number, the current number is multiplied with 16 and 0 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 0 at the end of the number, the current number is multiplied
 * with 10 and 0 is added. The resulting number is displayed as well.
*/
void MainWindow::_0(){
    if(start)
        ui->num->display(0);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+0);
       else  ui->num->display(ui->num->intValue()*10+0);
    }
    start=false;
}
/*
 * This method is activated when 1 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 1 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 1 at the end of the number, the current number is multiplied with 16 and 1 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 1 at the end of the number, the current number is multiplied
 * with 10 and 1 is added. The resulting number is displayed as well.
*/
void MainWindow::_1(){
    if(start)
        ui->num->display(1);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+1);
       else  ui->num->display(ui->num->intValue()*10+1);
    }
    start=false;
}
/*
 * This method is activated when 2 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 2 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 2 at the end of the number, the current number is multiplied with 16 and 2 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 2 at the end of the number, the current number is multiplied
 * with 10 and 2 is added. The resulting number is displayed as well.
*/
void MainWindow::_2(){
    if(start)
        ui->num->display(2);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+2);
       else  ui->num->display(ui->num->intValue()*10+2);
    }
    start=false;
}
/*
 * This method is activated when 3 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 3 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 3 at the end of the number, the current number is multiplied with 16 and 3 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 3 at the end of the number, the current number is multiplied
 * with 10 and 3 is added. The resulting number is displayed as well.
*/
void MainWindow::_3(){
    if(start)
        ui->num->display(3);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+3);
       else  ui->num->display(ui->num->intValue()*10+3);
    }
    start=false;
}
/*
 * This method is activated when 4 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 4 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 4 at the end of the number, the current number is multiplied with 16 and 4 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 4 at the end of the number, the current number is multiplied
 * with 10 and 4 is added. The resulting number is displayed as well.
*/
void MainWindow::_4(){
    if(start)
        ui->num->display(4);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+4);
       else  ui->num->display(ui->num->intValue()*10+4);
    }
    start=false;
}
/*
 * This method is activated when 5 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 5 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 5 at the end of the number, the current number is multiplied with 16 and 5 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 5 at the end of the number, the current number is multiplied
 * with 10 and 5 is added. The resulting number is displayed as well.
*/
void MainWindow::_5(){
    if(start)
        ui->num->display(5);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+5);
       else  ui->num->display(ui->num->intValue()*10+5);
    }
    start=false;
}
/*
 * This method is activated when 6 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 6 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 6 at the end of the number, the current number is multiplied with 16 and 6 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 6 at the end of the number, the current number is multiplied
 * with 10 and 6 is added. The resulting number is displayed as well.
*/
void MainWindow::_6(){
    if(start)
        ui->num->display(6);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+6);
       else  ui->num->display(ui->num->intValue()*10+6);
    }
    start=false;
}
/*
 * This method is activated when 7 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 7 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 7 at the end of the number, the current number is multiplied with 16 and 7 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 7 at the end of the number, the current number is multiplied
 * with 10 and 7 is added. The resulting number is displayed as well.
*/
void MainWindow::_7(){
    if(start)
        ui->num->display(7);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+7);
       else  ui->num->display(ui->num->intValue()*10+7);
    }
    start=false;
}
/*
 * This method is activated when 8 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 8 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 8 at the end of the number, the current number is multiplied with 16 and 8 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 8 at the end of the number, the current number is multiplied
 * with 10 and 8 is added. The resulting number is displayed as well.
*/
void MainWindow::_8(){
    if(start)
        ui->num->display(8);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+8);
       else  ui->num->display(ui->num->intValue()*10+8);
    }
    start=false;
}
/*
 * This method is activated when 9 is clicked. If start boolean is true, that means it is the first digit of a number
 * so 9 is displayed. Else, the start boolean is false: if the isHex is true, that means we are operating in the hexadecimal
 * so to put 9 at the end of the number, the current number is multiplied with 16 and 9 is added. If we are operating
 * in decimal mode, else part is done. In else part to add 9 at the end of the number, the current number is multiplied
 * with 10 and 9 is added. The resulting number is displayed as well.
*/
void MainWindow::_9(){
    if(start)
        ui->num->display(9);
    else{
       if(isHex)  ui->num->display(ui->num->intValue()*16+9);
       else  ui->num->display(ui->num->intValue()*10+9);
    }
    start=false;
}
/*
 * This method is activated when A is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 10 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means A needs o added at the end of the number, so current value
 * is multiplied with 16 and 10 is added, then result is displayed.
*/
void MainWindow::_a(){
    if(isHex){
        if(start)
            ui->num->display(10);
        else
            ui->num->display(ui->num->intValue()*16+10);
        start=false;
    }
}
/*
 * This method is activated when B is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 11 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means B needs o added at the end of the number, so current value
 * is multiplied with 16 and 11 is added, then result is displayed.
*/
void MainWindow::_b(){
    if(isHex){
        if(start)
            ui->num->display(11);
        else
            ui->num->display(ui->num->intValue()*16+11);
        start=false;
    }

}
/*
 * This method is activated when C is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 12 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means C needs o added at the end of the number, so current value
 * is multiplied with 16 and 12 is added, then result is displayed.
*/
void MainWindow::_c(){
    if(isHex){
        if(start)
            ui->num->display(12);
        else
            ui->num->display(ui->num->intValue()*16+12);
        start=false;
    }
}
/*
 * This method is activated when D is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 13 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means C needs o added at the end of the number, so current value
 * is multiplied with 16 and 13 is added, then result is displayed.
*/
void MainWindow::_d(){
    if(isHex){
        if(start)
            ui->num->display(13);
        else
            ui->num->display(ui->num->intValue()*16+13);
        start=false;
     }
}
/*
 * This method is activated when E is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 14 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means E needs o added at the end of the number, so current value
 * is multiplied with 16 and 14 is added, then result is displayed.
*/
void MainWindow::_e(){
    if(isHex){
        if(start)
            ui->num->display(14);
        else
            ui->num->display(ui->num->intValue()*16+14);
        start=false;
    }
}
/*
 * This method is activated when F is clicked. If we are not on decimal mode,isHex is false, nothing is done. If isHex is true,
 * then start boolean is checked. If start is true, then that means this is the first digit of the number so 15 is displayed in
 * hexadecimal mode of LCDnumber. If start is false, that means E needs o added at the end of the number, so current value
 * is multiplied with 16 and 15 is added, then result is displayed.
*/
void MainWindow::_f(){
    if(isHex){
        if(start)
            ui->num->display(15);
        else
            ui->num->display(ui->num->intValue()*16+15);
        start=false;
    }
}


/*
 * This method is activated when clicked on div button
 * Makes start boolean true,if lastOp equals -1,meaning there is no other operation before, result is the value on the screen.
 * Else; if lastOp equals 0,meaning plus operation called before division, result is the sum of the current result and the value on the screen,
 * if lastOp equals 1,meaning sub operation called before division, result is the difference between the current result and the value on the screen,
 * if lastOp equals 2,meaning mult operation called before division, result is the current value times the value on the screen,
 * if lastOp equals 3,meaning div operation called before division, result is the current value divided by the value on the screen.
 * Makes lastOp 3, displays the modified result on the screen
 */
void MainWindow::div(){
    start = true;
    if(lastOp==-1){
        result=ui->num->intValue();
    }else{
        if(lastOp==0){
            result+=ui->num->intValue();
        }else if(lastOp==1){
            result-=ui->num->intValue();
        }else if(lastOp==2){
            result*=ui->num->intValue();
        }else{
            result/=ui->num->intValue();
        }
    }
    lastOp=3;
    ui->num->display(result);
}


/*
 * This method is activated when clicked on mult button
 * Makes start boolean true,if lastOp equals -1,meaning there is no other operation before, result is the value on the screen.
 * Else; if lastOp equals 0,meaning plus operation called before multiplication, result is the sum of the current result and the value on the screen,
 * if lastOp equals 1,meaning sub operation called before multiplication, result is the difference between the current result and the value on the screen,
 * if lastOp equals 2,meaning mult operation called before multiplication, result is the current value times the value on the screen,
 * if lastOp equals 3,meaning div operation called before multiplication, result is the current value divided by the value on the screen.
 * Makes lastOp 2, displays the modified result on the screen
 */
void MainWindow::mult(){
    start = true;
    if(lastOp==-1){
        result=ui->num->intValue();
    }else{
        if(lastOp==0){
            result+=ui->num->intValue();
        }else if(lastOp==1){
            result-=ui->num->intValue();
        }else if(lastOp==2){
            result*=ui->num->intValue();
        }else{
            result/=ui->num->intValue();
        }
    }
    lastOp=2;
    ui->num->display(result);
}



/*
 * This method is activated when clicked on sub button
 * Makes start boolean true,if lastOp equals -1,meaning there is no other operation before, result is the value on the screen.
 * Else; if lastOp equals 0,meaning plus operation called before substraction, result is the sum of the current result and the value on the screen,
 * if lastOp equals 1,meaning sub operation called before substraction, result is the difference between the current result and the value on the screen,
 * if lastOp equals 2,meaning mult operation called before substraction, result is the current value times the value on the screen,
 * if lastOp equals 3,meaning div operation called before substraction, result is the current value divided by the value on the screen.
 * Makes lastOp 1, displays the modified result on the screen
 */
void MainWindow::sub(){
    start = true;
    if(lastOp==-1){
        result=ui->num->intValue();
    }else{
        if(lastOp==0){
            result+=ui->num->intValue();
        }else if(lastOp==1){
            result-=ui->num->intValue();
        }else if(lastOp==2){
            result*=ui->num->intValue();
        }else{
            result/=ui->num->intValue();
        }
    }
    lastOp=1;
    ui->num->display(result);
}

/*
 * This method is activated when clicked on plus button
 * Makes start boolean true,if lastOp equals -1,meaning there is no other operation before, result is the value on the screen.
 * Else; if lastOp equals 0,meaning plus operation called before addition, result is the sum of the current result and the value on the screen,
 * if lastOp equals 1,meaning sub operation called before addition, result is the difference between the current result and the value on the screen,
 * if lastOp equals 2,meaning mult operation called before addition, result is the current value times the value on the screen,
 * if lastOp equals 3,meaning div operation called before addition, result is the current value divided by the value on the screen.
 * Makes lastOp 0, displays the modified result on the screen
 */
void MainWindow::plus(){
    start = true;
    if(lastOp==-1){
        result=ui->num->intValue();
    }else{
        if(lastOp==0){
            result+=ui->num->intValue();
        }else if(lastOp==1){
            result-=ui->num->intValue();
        }else if(lastOp==2){
            result*=ui->num->intValue();
        }else{
            result/=ui->num->intValue();
        }
    }
    lastOp=0;
    ui->num->display(result);
}


/*
 * This method is activated when clicked on eq button
 * Makes start boolean true,if lastOp equals -1,meaning there is no other operation before, result is the value on the screen.
 * Else; if lastOp equals 0,meaning plus operation called before, result is the sum of the current result and the value on the screen,
 * if lastOp equals 1,meaning sub operation called before, result is the difference between the current result and the value on the screen,
 * if lastOp equals 2,meaning mult operation called before, result is the current value times the value on the screen,
 * if lastOp equals 3,meaning div operation called before, result is the current value divided by the value on the screen.
 * Makes lastOp -1, displays the modified result on the screen
 */
void MainWindow::eq(){
    start=true;
    if(lastOp==-1){
        result=ui->num->intValue();
    }else{
        if(lastOp==0){
            result+=ui->num->intValue();
        }else if(lastOp==1){
            result-=ui->num->intValue();
        }else if(lastOp==2){
            result*=ui->num->intValue();
        }else{
            result/=ui->num->intValue();
        }
    }
    lastOp=-1;
    ui->num->display(result);
}
