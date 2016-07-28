enum PLANTYPE
{
  Gold=0,
  Silver
};
class AccoutingSystem
{
public:
  AccoutingSystem(PLANTYPE type,int basicNum,int additionalNum):
  m_type(type),
  m_basicNum(basicNum),
  m_additionalNum(additionalNum)
  {
  };
  void checkParameter();
  double getBillByIteration1();
private:
  PLANTYPE m_type;
  int m_basicNum;
  int m_additionalNum;
};