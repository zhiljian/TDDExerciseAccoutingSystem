enum PLANTYPE
{
  Gold=0,
  Silver
};
/*
typedef struct LineUserInfo
{
  string name;
  PLANTYPE type;
  int basicNum;
  int additionalNum;
  int usedMinutes;
  bool isQualityForFamily;
}LineUserInfo
#define MAX_USER_NUM 10
*/
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
  double getBillByIteration3();
  bool isQualityForFamily();
private:
  PLANTYPE m_type;
  int m_basicNum;
  int m_additionalNum;
  int m_usedMinutes;
//  LineUserInfo m_lineUser[MAX_USER_NUM];
};