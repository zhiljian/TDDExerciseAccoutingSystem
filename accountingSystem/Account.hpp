#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

static const double GoldBasicRate = 49.95;
static const double GoldAdditionRate = 14.50;
static const double GoldExceedMinutesRate = 0.45;

static const double SilverBasicRate = 29.95;
static const double SilverAdditionRate = 21.50;
static const double SilverExceedMinutesRate = 0.54;

static const int GoldQuota = 1000;
static const int SilverQuota = 500;

enum Type {Gold, Silver};

class Account{
private:
  Type m_type;
public:
  Account(Type type) : m_type(type){}
  double Bill(int line, int minutes);
};

#endif //__ACCOUNT_HPP__
