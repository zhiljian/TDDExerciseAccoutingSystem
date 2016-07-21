#include <gtest/gtest.h>

#include "Account.hpp"

class TestAccount : public ::testing::Test{

};

TEST(TestAccount, GivenGoldAcountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 1);
  
  EXPECT_EQ(GoldMainLineCost, bill);
}

TEST(TestAccount, GivenGoldAccountWithTwoLinesShallHaveMainLineCostPlusAdditionalLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 2);

  EXPECT_EQ(GoldMainLineCost + GoldAddiLineCost, bill);
}


TEST(TestAccount, GivenSilverAccountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(Silver, 1);
  
  EXPECT_EQ(SliverMainLineCost, bill);
}

TEST(TestAccount, GivenSliverAccountWithMultLinesShallHaveMainLineCostPlusMoreAdditionLineCost){
  Account account = Account();
  double bill = account.Bill(Sliver, 3);
  
  EXPECT_EQ((2*SliverAddiLineCost) + SliverMainLineCost, bill);
}

