enum PLANTYPE
{
  Gold=0,
  Silver
};
class AccoutingSystem
{
public:
  double getBill(PLANTYPE type,int LineNum);
};