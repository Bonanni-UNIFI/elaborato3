#ifndef ELABORATO3_REGISTER_H
#define ELABORATO3_REGISTER_H

#include "Activity.h"
#include <QDate>
#include <QVector>
#include <QMap>

using namespace std;

class Register {
public:
    //default constructor
    Register();

    // Method to add an activity for a specific day
    void addActivity(const QDate &date, const Activity &activity);

    // Method to remove an activity from activitiesByDate
    bool removeActivity(const QDate &date, const Activity &activity);

    // Method to print activities for each day
    QVector<Activity> getActivitiesByDay(const QDate &date) const;

private:
    QMap<QDate, QVector<Activity>> activitiesByDate;

};


#endif //ELABORATO3_REGISTER_H
