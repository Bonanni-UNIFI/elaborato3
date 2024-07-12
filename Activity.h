#ifndef ELABORATO3_ACTIVITY_H
#define ELABORATO3_ACTIVITY_H

#include <iostream>
#include <QString>
#include <QTime>

using namespace std;

class Activity {
public:
    Activity(const QString &description, QTime start, QTime end);

    //getter and setter methods:
    const QString getDescription() const;
    void setDescription(const QString &description);

    QTime getStart() const;
    void setStart(QTime start);

    QTime getAnEnd() const;
    void setAnEnd(QTime anEnd);

private:
    QString description;
    QTime start;
    QTime end;
};


#endif //ELABORATO3_ACTIVITY_H
