
#include "Account.hpp"

double Account::Bill(int line, int minutes)
{
  double rate = 0.0;
  if (Gold == m_type){
    if (minutes > GoldQuota){
      rate = (minutes - GoldQuota) * GoldExceedMinutesRate;
    }
    return rate += (line - 1) * GoldAdditionRate + GoldBasicRate;
  }
  
  if (minutes > SilverQuota){
    rate = (minutes - SilverQuota) * SilverExceedMinutesRate;
  }

  if (line > 1){
    return rate += (line - 1) * SilverAdditionRate + SilverBasicRate;
  }

  return rate += SilverBasicRate;
}
