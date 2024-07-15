#include <QtTest/QtTest>
#include <QVBoxLayout>
#include "mainwindow.h"

class TestMainWindow : public QObject {
Q_OBJECT

private slots:
    void testAddActivity();
    void testShowActivities();
};


void TestMainWindow::testAddActivity() {

}

void TestMainWindow::testShowActivities() {

}

QTEST_MAIN(TestMainWindow)
#include "tst_mainwindow.moc"

