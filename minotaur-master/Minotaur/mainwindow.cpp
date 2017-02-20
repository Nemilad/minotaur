#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"
#include "cstring"
#include "QString"
const char version[] ="0.1";


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    char current[] = "Версия программы: ";
    //current = version;
    std::strcat(current,version)
    ui->label_4->setText(current);
    //ui->label_4->setText("Версия программы: ");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    Dialog().exec();
}
