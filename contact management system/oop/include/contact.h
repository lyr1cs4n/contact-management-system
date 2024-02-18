#ifndef CONTACT_H
#define CONTACT_H
#include <bits/stdc++.h>
#include "phone.h"
#include "address.h"
#include "email.h"
using namespace std;

class contact
{
    private:
        int main_id;
        string main_name;
        string main_city;
        string main_gender;
        string main_age;
        string added_time;

        phone * main_phones;
        address * main_addresses;
        email * main_emails;

        int phone_size;
        int phone_count;
        int address_size;
        int address_count;
        int email_size;
        int email_count;

    public:
        contact();
        void input();
        void set_id(int);
        void set_name(string);
        void set_city(string);
        void set_gender(string);
        int get_id();
        void print ();
        void check_main();
        void set_age(string);
        bool is_integer(string );

};

#endif
