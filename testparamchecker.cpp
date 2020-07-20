#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, checkbpm(100));
    ASSERT_EQ(true, checkspo2(100));
    ASSERT_EQ(true, checkrespRate(50));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, checkbpm(100));
    ASSERT_EQ(true, checkspo2(100));
    ASSERT_EQ(true, checkrespRate(50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
