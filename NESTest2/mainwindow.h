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

private:
    void showDialog();
private:
    Ui::MainWindow *ui;
    QMenu *fileMenu;
    QAction *dialogAction;
};

#endif // MAINWINDOW_H
