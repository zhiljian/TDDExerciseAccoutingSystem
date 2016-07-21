#include <gtest/gtest.h>

#include "Account.hpp"

class TestAccount : public ::testing::Test{
};


TEST(TestAccount, GivenGoldAcountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 1);
  EXPECT_EQ(GoldBasicRate, bill);
}

TEST(TestAccount, GivenGoldAccountWithTwoLinesShallHaveMainLineCostPlusAdditionalLineCost)
{
  Account account = Account();
  double bill = account.Bill(Gold, 2);

  EXPECT_EQ(GoldBasicRate + GoldAdditionRate, bill);
}


TEST(TestAccount, GivenSilverAccountWithOneLineShallHaveMainLineCost)
{
  Account account = Account();
  double bill = account.Bill(Silver, 1);
  
  EXPECT_EQ(SilverBasicRate, bill);
}

TEST(TestAccount, GivenSliverAccountWithMultLinesShallHaveMainLineCostPlusMoreAdditionLineCost){
  Account account = Account();
  double bill = account.Bill(Silver, 3);
  
  EXPECT_EQ((2*SilverAdditionRate) + SilverBasicRate, bill);
}

