#include "cartridgedetails.h"
#include "ui_cartridgedetails.h"
#include <QFileDialog>

CartridgeDetails::CartridgeDetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CartridgeDetails)
{
    ui->setupUi(this);
}

CartridgeDetails::~CartridgeDetails()
{
    delete ui;
}

void CartridgeDetails::on_pushButton_clicked()
{
    QString result = QFileDialog::getOpenFileName(this, tr("Open NES file"), ".", "*.cpp (*.cpp)");
    this->ui->textBrowser->setText(result);
}
