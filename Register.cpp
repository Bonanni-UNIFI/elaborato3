#include "Register.h"

Register::Register() = default;

void Register::addActivity(const std::string& day, const Activity activity) {
    activitiesByDay.insert(std::make_pair(day, activity));
}

// Method to print activities for each day
void Register::printActivitiesByDay(string day) const{
    auto range = activitiesByDay.equal_range(day);
    std::cout << day << ":\n";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << "inizio - " << it->second.getStart() << endl;
        std::cout << "fine - " << it->second.getAnEnd() << endl;
        std::cout << "descrizione - " << it->second.getDescription() << endl;
    }
}