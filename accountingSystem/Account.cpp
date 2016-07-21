
#include "Account.hpp"

double Account::Bill(Type type, int line)
{
  if (line > 1){
    return (line - 1) * GoldAddiLineCost + GoldMainLineCost;
  }
  return GoldMainLineCost;
}
