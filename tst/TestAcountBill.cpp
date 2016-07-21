#include <gtest/gtest.h>

class TestAccount : public ::testing::Test{

};

TEST(TestAccount, GivenGoldAcountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(GOLD, 1);
  
  EXPECT_EQ(49.95, bill);
}
