#ifndef __ACCOUNT_HPP__
#define __ACCOUNT_HPP__

static const double GoldMainLineCost = 49.95;
enum Type {Gold, Silver};

class Account{
public:
  double Bill(Type type, int line);

};

#endif //__ACCOUNT_HPP__
