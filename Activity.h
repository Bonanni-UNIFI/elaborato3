#ifndef ELABORATO3_ACTIVITY_H
#define ELABORATO3_ACTIVITY_H

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Activity {
public:
    Activity(string description, time_t start, time_t end);

    //getter and setter methods:
    const string &getDescription() const;
    void setDescription(const string &description);

    time_t getStart() const;
    void setStart(time_t start);

    time_t getAnEnd() const;
    void setAnEnd(time_t anEnd);

private:
    string description;
    time_t start;
    time_t end;
};


#endif //ELABORATO3_ACTIVITY_H
