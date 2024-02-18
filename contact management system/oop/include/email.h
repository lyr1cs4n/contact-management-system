#ifndef EMAIL_H
#define EMAIL_H
#include <bits/stdc++.h>
using namespace std;

class email
{
    private:
      string main_email;
      string main_type;

    public:
      email();
      email(string ,string );
      void setemail(string );
      void setType(string );
      bool check_match(string );
      void print ();

};

#endif // EMAIL_H
