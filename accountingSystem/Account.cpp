
#include "Account.hpp"

double Account::Bill(Type type, int line)
{
  if (Gold == type){
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
