#include "Register.h"

Register::Register() = default;

void Register::addActivity(const QDate &date, const Activity &activity) {
    activitiesByDate[date].append(activity);
}

// Method that returns activities for each day
QVector<Activity> Register::getActivitiesByDay(const QDate &date) const{
    return activitiesByDate.value(date);
}

bool Register::removeActivity(const QDate &date, const Activity &activity) {
    if (activitiesByDate.contains(date)) {
        QVector<Activity> &activities = activitiesByDate[date];
        for (int i = 0; i < activities.size(); ++i) {
            if (activities[i].getDescription() == activity.getDescription() &&
                activities[i].getStart() == activity.getStart() &&
                activities[i].getAnEnd() == activity.getAnEnd()) {
                activities.remove(i);
                if (activities.isEmpty()) {
                    activitiesByDate.remove(date);
                }
                return true; // Attività rimossa con successo
            }
        }
    }
    return false; // Attività non trovata
}