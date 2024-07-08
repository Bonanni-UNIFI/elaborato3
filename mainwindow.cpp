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

void MainWindow::setupUI() {}

void MainWindow::loadDummyData() {}

void MainWindow::showActivities() {
}
