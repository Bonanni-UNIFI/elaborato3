#include <gtest/gtest.h>
#include "Activity.h"

TEST(ActivityTest, Constructor) {
Activity activity("Meeting", QTime(9, 0), QTime(10, 0));

EXPECT_EQ(activity.getDescription(), "Meeting");
EXPECT_EQ(activity.getStart(), QTime(9, 0));
EXPECT_EQ(activity.getAnEnd(), QTime(10, 0));
}

TEST(ActivityTest, SettersAndGetters) {
Activity activity("Meeting", QTime(9, 0), QTime(11, 0));

activity.setDescription("Workshop");
EXPECT_EQ(activity.getDescription(), "Workshop");

activity.setStart(QTime(10, 0));
EXPECT_EQ(activity.getStart(), QTime(10, 0));

activity.setAnEnd(QTime(12, 0));
EXPECT_EQ(activity.getAnEnd(), QTime(12, 0));
}

// Test for the costructor that throw the exception
TEST(ActivityTest, ConstructorThrowsExceptionOnInvalidTimes) {
    EXPECT_THROW(Activity("Invalid Meeting", QTime(10, 0), QTime(9, 0)), std::invalid_argument);
}

// Test for setStart that throw the exception
TEST(ActivityTest, SetStartThrowsExceptionOnInvalidTime) {
    Activity activity("Valid Meeting", QTime(9, 0), QTime(10, 0));
    EXPECT_THROW(activity.setStart(QTime(10, 30)), std::invalid_argument);
}

// Test per setEndTime that throw the exception
TEST(ActivityTest, SetAnEndThrowsExceptionOnInvalidTime) {
    Activity activity("Valid Meeting", QTime(9, 0), QTime(10, 0));
    EXPECT_THROW(activity.setAnEnd(QTime(8, 30)), std::invalid_argument);
}

// Test for right values that doesn't throw the exception
TEST(ActivityTest, ValidTimes) {
    Activity activity("Meeting", QTime(9, 0), QTime(10, 0));
    EXPECT_NO_THROW(activity.setStart(QTime(8, 0)));
    EXPECT_NO_THROW(activity.setAnEnd(QTime(11, 0)));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}