#include "AccoutingSystem.hpp"

double AccoutingSystem::getBillByIteration1()
{
  double totalFee = 0.0;
  if (Gold == m_type)
  {
     totalFee = (49.95 * m_basicNum + 14.50 * m_additionalNum);
  }
  else if(Silver == m_type)
  {
    totalFee = (29.95 * m_basicNum + 21.50 * m_additionalNum);
  }
  return totalFee;
}

void AccoutingSystem::checkParameter()
{
  if(m_basicNum <= 0 || m_additionalNum < 0)
  {
    m_basicNum = 0;
    m_additionalNum = 0;
  }
}

