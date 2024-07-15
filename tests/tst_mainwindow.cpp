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
    MainWindow mainWindow;
    mainWindow.show();

    // Simula l'aggiunta di un'attività
    QDate date(2024, 7, 11);
    Activity activity("Meeting", QTime(9, 0), QTime(10, 0));
    mainWindow.activityLog.addActivity(date, activity);

    auto activities = mainWindow.activityLog.getActivitiesByDay(date);
    QCOMPARE(activities.size(), 1);
    QCOMPARE(activities[0].getDescription(), QString("Meeting"));
    QCOMPARE(activities[0].getStart(), QTime(9, 0));
    QCOMPARE(activities[0].getAnEnd(), QTime(10, 0));
}

void TestMainWindow::testShowActivities() {
    MainWindow mainWindow;
    mainWindow.show();

    // Aggiungi attività e verifica la visualizzazione
    QDate date(2024, 7, 15);
    Activity activity1("Meetings", QTime(9, 0), QTime(10, 0));
    Activity activity2("Workshop", QTime(11, 0), QTime(12, 0));
    mainWindow.activityLog.addActivity(date, activity1);
    mainWindow.activityLog.addActivity(date, activity2);


    // Verifica che le attività siano visualizzate correttamente
    mainWindow.showActivities();
    auto items = mainWindow.tableWidget->findItems("Meetings", Qt::MatchExactly);
    QCOMPARE(items.size(), 1);
    items = mainWindow.tableWidget->findItems("Workshop", Qt::MatchExactly);
    QCOMPARE(items.size(), 1);
}

QTEST_MAIN(TestMainWindow)
#include "tst_mainwindow.moc"

