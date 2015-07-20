#include "mainwindow.h"
#include "ui_mainwindow.h"

QString filename = "null";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_submit_clicked()
{

}

void MainWindow::on_actionOpen_Merch_List_triggered()
{
    filename = QFileDialog::getOpenFileName(this,tr("Open Merch List"), "/home/jana", tr("Excel Spreadsheets (*.xls *.xlsx)"));
}

void MainWindow::on_actionExit_triggered()
{
    delete ui;
}
