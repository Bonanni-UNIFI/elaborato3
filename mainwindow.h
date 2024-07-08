//
// Created by stefa on 08/07/2024.
//

#ifndef ELABORATO3_MAINWINDOW_H
#define ELABORATO3_MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
};


#endif //ELABORATO3_MAINWINDOW_H
