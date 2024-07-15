#include <gtest/gtest.h>
#include "Activity.h"

TEST(ActivityTest, Constructor) {
Activity activity("Meeting", QTime(9, 0), QTime(10, 0));

EXPECT_EQ(activity.getDescription(), "Meeting");
EXPECT_EQ(activity.getStart(), QTime(9, 0));
EXPECT_EQ(activity.getAnEnd(), QTime(10, 0));
}

TEST(ActivityTest, SettersAndGetters) {
Activity activity("Meeting", QTime(9, 0), QTime(10, 0));

activity.setDescription("Workshop");
EXPECT_EQ(activity.getDescription(), "Workshop");

activity.setStart(QTime(10, 0));
EXPECT_EQ(activity.getStart(), QTime(10, 0));

activity.setAnEnd(QTime(11, 0));
EXPECT_EQ(activity.getAnEnd(), QTime(11, 0));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}