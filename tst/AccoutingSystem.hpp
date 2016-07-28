enum PLANTYPE
{
  Gold=0,
  Silver
};
class AccoutingSystem
{
public:
  AccoutingSystem(PLANTYPE type,int basicNum,int additionalNum,int minutes = 0):
  m_type(type),
  m_basicNum(basicNum),
  m_additionalNum(additionalNum),
  m_usedMinutes(minutes)
  {
  };
  void checkParameter();
  double getBillByIteration1();
  double getBillByIteration2();
private:
  PLANTYPE m_type;
  int m_basicNum;
  int m_additionalNum;
  int m_usedMinutes;
};