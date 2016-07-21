
#include "Account.hpp"

double Account::Bill(int line, int minutes)
{
  if (Gold == m_type){
    if (line > 1){
      return (line - 1) * GoldAdditionRate + GoldBasicRate;
    }
    return GoldBasicRate;
  }
  
  if (line > 1){
    return (line - 1) * SilverAdditionRate + SilverBasicRate;
  }

  return SilverBasicRate;
}
