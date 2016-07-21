
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
  
  if (line > 1){
    return (line - 1) * SilverAdditionRate + SilverBasicRate;
  }

  return SilverBasicRate;
}
