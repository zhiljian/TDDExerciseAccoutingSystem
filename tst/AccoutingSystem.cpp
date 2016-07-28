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

double AccoutingSystem::getBillByIteration2()
{
  double totalFee = 0.0;
  int exceedMinutes = 0;
  if (Gold == m_type)
  {
    exceedMinutes = m_usedMinutes > 1000 ? m_usedMinutes-1000 : 0;
    totalFee = (49.95 * m_basicNum + 0.50 * exceedMinutes);
  }
  else if(Silver == m_type)
  {
    exceedMinutes = m_usedMinutes > 500 ? m_usedMinutes-500 : 0;
    totalFee = (29.95 * m_basicNum + 0.54 * exceedMinutes);
  }
  return totalFee;

}


void AccoutingSystem::checkParameter()
{
  if(m_basicNum <= 0 || m_additionalNum < 0)
  {
    m_basicNum = 0;
    m_additionalNum = 0;
    m_usedMinutes = 0;
  }
}

