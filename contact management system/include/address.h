#ifndef ADDRESS_H
#define ADDRESS_H
#include <bits/stdc++.h>
using namespace std;

class address
{
    private:
      string main_place;
      string main_type;

    public:
      address();
      address(string ,string );
      void setaddress(string );
      void setType(string );
      bool check_match(string );
      void print ();

};

#endif // ADDRESS_H
