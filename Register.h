#ifndef ELABORATO3_REGISTER_H
#define ELABORATO3_REGISTER_H

#include "Activity.h"
#include <map>
#include <string>

using namespace std;

class Register {
private:
    multimap<string, Activity> activitiesByDay;

};


#endif //ELABORATO3_REGISTER_H
