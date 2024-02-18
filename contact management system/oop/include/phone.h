#ifndef PHONE_H
#define PHONE_H
#include <bits/stdc++.h>
using namespace std;

class phone
{
     private:
      string main_phone;
      string main_type;

    public:
      phone();
      phone(string phone,string type);
      void setPhone(string phone);
      void setType(string type);
      bool check_match(string x);
      void print ();

};

#endif

