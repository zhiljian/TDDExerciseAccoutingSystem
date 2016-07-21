
#include "Account.hpp"

double Account::Bill(Type type, int line)
{
  if (Gold == type){
    if (line > 1){
      return (line - 1) * GoldAddiLineCost + GoldMainLineCost;
    }
    return GoldMainLineCost;
  }
  
  if (line > 1){
    return (line - 1) * SilverAddiLineCost + SilverMainLineCost;
  }

  return SilverMainLineCost;
}
