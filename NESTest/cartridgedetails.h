#ifndef CARTRIDGEDETAILS_H
#define CARTRIDGEDETAILS_H

#include <QWidget>

namespace Ui {
class CartridgeDetails;
}

class CartridgeDetails : public QWidget
{
    Q_OBJECT

public:
    explicit CartridgeDetails(QWidget *parent = 0);
    ~CartridgeDetails();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CartridgeDetails *ui;
};

#endif // CARTRIDGEDETAILS_H
