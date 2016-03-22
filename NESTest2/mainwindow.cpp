#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    fileMenu = menuBar()->addMenu(tr("&File"));
    dialogAction = new QAction(tr("Show &Dialog"), this);
    connect(dialogAction, &QAction::triggered, this, &MainWindow::showDialog);
    fileMenu->addAction(dialogAction);

    QAction* exit = new QAction(tr("&Exit"), this);
    connect(exit, &QAction::triggered, this, &MainWindow::close);
    fileMenu->addAction(exit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showDialog()
{
    QMessageBox msgBox;
    msgBox.setText("Dialog shown");
    msgBox.exec();
}
