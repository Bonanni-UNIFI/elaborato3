#include <gtest/gtest.h>
#include "Activity.h"
#include "Register.h"

TEST(RegisterTest, AddActivity) {
Register log;
QDate date(2024, 7, 15);
Activity activity("Meeting", QTime(9, 0), QTime(10, 0));

log.addActivity(date, activity);

auto activities = log.getActivitiesByDay(date);
ASSERT_EQ(activities.size(), 1);
EXPECT_EQ(activities[0].getDescription(), "Meeting");
EXPECT_EQ(activities[0].getStart(), QTime(9, 0));
EXPECT_EQ(activities[0].getAnEnd(), QTime(10, 0));
}

TEST(RegisterTest, GetActivities) {
Register log;
QDate date1(2024, 7, 15);
QDate date2(2024, 7, 16);

log.addActivity(date1, Activity("Meeting", QTime(9, 0), QTime(10, 0)));
log.addActivity(date1, Activity("Coding", QTime(10, 30), QTime(12, 0)));
log.addActivity(date2, Activity("Testing", QTime(13, 0), QTime(15, 0)));

auto activities1 = log.getActivitiesByDay(date1);
ASSERT_EQ(activities1.size(), 2);
EXPECT_EQ(activities1[0].getDescription(), "Meeting");
EXPECT_EQ(activities1[1].getDescription(), "Coding");

auto activities2 = log.getActivitiesByDay(date2);
ASSERT_EQ(activities2.size(), 1);
EXPECT_EQ(activities2[0].getDescription(), "Testing");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
