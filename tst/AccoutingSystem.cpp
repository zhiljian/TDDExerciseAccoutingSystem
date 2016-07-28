#include "AccoutingSystem.hpp"

double AccoutingSystem::getBill(PLANTYPE type,int LineNum)
{
  if (Gold == type)
  {
     return 49.95;
  }
  else if(Silver == type)
  {
    return 29.95;
  }
 
}

