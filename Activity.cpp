#include "Activity.h"

Activity::Activity(QString &description, QTime &start, QTime &end):description(description), start(start), end(end) {}

const QString Activity::getDescription() const { return description; }
void Activity::setDescription(const QString &description) { Activity::description = description; }

QTime Activity::getStart() const { return start; }
void Activity::setStart(QTime start) { Activity::start = start; }

QTime Activity::getAnEnd() const { return end; }
void Activity::setAnEnd(QTime anEnd) { end = anEnd; }