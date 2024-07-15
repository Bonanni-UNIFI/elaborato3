#include "Activity.h"

Activity::Activity(const QString &description, QTime start, QTime end):description(description), start(start), end(end) {
    if (end <= start) {
        throw std::invalid_argument("End time must be greater than start time.");
    }
}

const QString Activity::getDescription() const { return description; }
void Activity::setDescription(const QString &description) { Activity::description = description; }

QTime Activity::getStart() const { return start; }
void Activity::setStart(QTime start) {
    if (end <= start) {
        throw std::invalid_argument("End time must be greater than start time.");
    }
    Activity::start = start;
}

QTime Activity::getAnEnd() const { return end; }
void Activity::setAnEnd(QTime anEnd) {
    if (anEnd <= start) {
        throw std::invalid_argument("End time must be greater than start time.");
    }
    end = anEnd;
}