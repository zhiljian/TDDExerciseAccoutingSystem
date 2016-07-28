#include <gtest/gtest.h>
#include "AccoutingSystem.hpp"

class TestGame : public ::testing::Test{
public:
  void SetUp(){
    //code here be executed before test case
  }

  void TearDown(){
    //Code here be executed after test case
  }
};

TEST(TestGame, OneGoldBasicLineNeed4995)
{
  PLANTYPE type = Gold;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 0;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum);
  as.checkParameter();
  EXPECT_EQ(49.95,as.getBillByIteration1());
}

TEST(TestGame, OneSilverBasicLineNeed2995)
{
  PLANTYPE type = Silver;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 0;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum);
  as.checkParameter();
  EXPECT_EQ(29.95,as.getBillByIteration1());
}

TEST(TestGame, OneGoldBasicLineAndTwoAdditionalLineNeed7895)
{
  PLANTYPE type = Gold;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 2;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum);
  as.checkParameter();
  EXPECT_EQ(78.95,as.getBillByIteration1());
}

TEST(TestGame, UnexpectedLineAmountNeed0)
{
  PLANTYPE type = Gold;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = -1;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum);
  as.checkParameter();
  EXPECT_EQ(0.0,as.getBillByIteration1());
}

TEST(TestGame, OneGoldBasicLineAndNotExceedMinuteNeed4995)
{
  PLANTYPE type = Gold;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 0;
  int usedMinutes = 1000;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum,usedMinutes);
  as.checkParameter();
  EXPECT_EQ(49.95,as.getBillByIteration2());
}

TEST(TestGame, OneSilverBasicLineAndExceedTwentyMinutesNeed4075)
{
  PLANTYPE type = Silver;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 0;
  int usedMinutes = 520;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum,usedMinutes);
  as.checkParameter();
  EXPECT_EQ(40.75,as.getBillByIteration2());
}

TEST(TestGame, OneGoldBasicLineAndThreeAdditionalLineNotExceedMinutesNeed8395)
{
  PLANTYPE type = Gold;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 3;
  int usedMinutes = 1000;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum,usedMinutes);
  as.checkParameter();
  EXPECT_EQ(83.95,as.getBillByIteration3());
  EXPECT_EQ(true,as.isQualityForFamily());
}
TEST(TestGame, OneSilverBasicLineAndFourAdditionalLineExceedTwentyMinutesNeed9375)
{
  PLANTYPE type = Silver;
  int BasicGoldNum = 1;
  int AdditionnalGoldNum = 4;
  int usedMinutes = 520;
  AccoutingSystem as(type,BasicGoldNum,AdditionnalGoldNum,usedMinutes);
  as.checkParameter();
  EXPECT_EQ(93.75,as.getBillByIteration3());
  EXPECT_EQ(true,as.isQualityForFamily());
}



int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}
