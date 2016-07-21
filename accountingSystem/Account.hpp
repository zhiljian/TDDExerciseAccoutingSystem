#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

static const double GoldBasicRate = 49.95;
static const double GoldAdditionRate = 14.50;
static const double SilverBasicRate = 29.95;
static const double SilverAdditionRate = 21.50;

enum Type {Gold, Silver};

class Account{
public:
  double Bill(Type type, int line);
};

#endif //__ACCOUNT_HPP__
