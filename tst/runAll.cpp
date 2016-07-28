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


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  
  return RUN_ALL_TESTS();
}
