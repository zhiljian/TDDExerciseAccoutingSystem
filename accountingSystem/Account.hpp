#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

static const double GoldBasicRate = 49.95;
static const double GoldAdditionRate = 14.50;
static const double SilverBasicRate = 29.95;
static const double SilverAdditionRate = 21.50;

static const int GoldQuota = 1000;

enum Type {Gold, Silver};

class Account{
private:
  Type m_type;
public:
  Account(Type type) : m_type(type){}
  double Bill(int line, int minutes = GoldQuota);
};

#endif //__ACCOUNT_HPP__
