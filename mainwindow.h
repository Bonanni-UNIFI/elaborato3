#ifndef ELABORATO3_MAINWINDOW_H
#define ELABORATO3_MAINWINDOW_H

#include <QWidget>
#include <QMainWindow>
#include <QTableWidget>
#include "Register.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void showActivities();

private:
    QDate selectedDate;
    Register activityLog;
    QTableWidget *tableWidget;

    friend class TestMainWindow;

    void setupUI();
    void loadDummyData();
};


#endif //ELABORATO3_MAINWINDOW_H
