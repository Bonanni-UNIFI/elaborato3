#include "Activity.h"

Activity::Activity(string description, time_t start, time_t end):description(description), start(start), end(end) {}

const string &Activity::getDescription() const { return description; }
void Activity::setDescription(const string &description) { Activity::description = description; }

time_t Activity::getStart() const { return start; }
void Activity::setStart(time_t start) { Activity::start = start; }

time_t Activity::getAnEnd() const { return end; }
void Activity::setAnEnd(time_t anEnd) { end = anEnd; }