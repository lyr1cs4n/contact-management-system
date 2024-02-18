#ifndef CONTACTBOOK_H
#define CONTACTBOOK_H
#include <bits/stdc++.h>
#include "contact.h"
using namespace std;

class ContactBook
{
    private:
        int main_size;
        int main_count;

        contact* main_contacts;

    public:
        ContactBook(int);
        void add_user();
        void delete_user(int);
        void edit_user(int);
        void print();
        void searchUser(int);

};

#endif // CONTACTBOOK_H
