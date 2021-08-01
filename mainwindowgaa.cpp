#include "mainwindowgaa.h"
#include "ui_mainwindowgaa.h"

MainWindowgaa::MainWindowgaa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowgaa)
{
    ui->setupUi(this);
}

MainWindowgaa::~MainWindowgaa()
{
    delete ui;
}
