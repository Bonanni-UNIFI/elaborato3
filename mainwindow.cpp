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
    QWidget *centralWidget = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QDateEdit *dateEdit = new QDateEdit(QDate::currentDate(), this);
    dateEdit->setCalendarPopup(true);

    tableWidget->setColumnCount(3);
    tableWidget->setHorizontalHeaderLabels({"Description", "Start Time", "End Time"});
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    layout->addWidget(dateEdit);
    layout->addWidget(tableWidget);
    setCentralWidget(centralWidget);

    selectedDate = QDate::currentDate();
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
    tableWidget->setRowCount(0);

    QVector<Activity> activities = activityLog.getActivitiesByDay(selectedDate);
    for (const Activity &activity : activities) {
        int row = tableWidget->rowCount();
        tableWidget->insertRow(row);

        tableWidget->setItem(row, 0, new QTableWidgetItem(activity.getDescription()));
        tableWidget->setItem(row, 1, new QTableWidgetItem(activity.getStart().toString()));
        tableWidget->setItem(row, 2, new QTableWidgetItem(activity.getAnEnd().toString()));
    }
}//function that shows the activities to the user interface
