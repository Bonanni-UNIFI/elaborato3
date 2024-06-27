#ifndef ELABORATO3_REGISTER_H
#define ELABORATO3_REGISTER_H

#include "Activity.h"
#include <map>
#include <string>

using namespace std;

class Register {
public:
    //default constructor
    Register();

    // Method to add an activity for a specific day
    void addActivity(const std::string& day, const Activity activity);

    // Method to print activities for each day
    void printActivitiesByDay(string day) const;

private:
    multimap<string, Activity> activitiesByDay;

};


#endif //ELABORATO3_REGISTER_H
