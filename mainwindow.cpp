#include "MainWindow.h"
#include <QVBoxLayout>
#include <QPushButton>
#include <QDateEdit>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent), tableWidget(new QTableWidget(this)) {
    setupUI();
    loadDummyData();
    showActivities();
}

MainWindow::~MainWindow() {}

void MainWindow::setupUI() {

}//function that creates the user interface

void MainWindow::loadDummyData() {
    activityLog.addActivity(QDate::currentDate(), Activity("Meeting", QTime(9, 0), QTime(10, 0)));
    activityLog.addActivity(QDate::currentDate(), Activity("Coding", QTime(10, 30), QTime(12, 0)));
    activityLog.addActivity(QDate::currentDate(), Activity("Lunch", QTime(12, 0), QTime(13, 0)));
    QDate specificDay(2024, 7, 10);
    activityLog.addActivity(specificDay, Activity("Reading", QTime(12, 0), QTime(13, 0)));
    activityLog.addActivity(QDate::currentDate(), Activity("Gaming", QTime(13, 30), QTime(20, 0)));
    activityLog.addActivity(QDate::currentDate(), Activity("Dinner", QTime(20, 45), QTime(21, 15)));
}//function that add the activities to the activityLog

void MainWindow::showActivities() {

}//function that shows the activities to the user interface
