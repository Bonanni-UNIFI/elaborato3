#include "Register.h"

Register::Register() = default;

void Register::addActivity(const QDate &date, const Activity &activity) {
    activitiesByDate[date].append(activity);
}

// Method that returns activities for each day
QVector<Activity> Register::getActivitiesByDay(const QDate &date) const{
    return activitiesByDate.value(date);
}