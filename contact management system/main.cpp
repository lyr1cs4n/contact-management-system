#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <conio.h>
#include <iomanip>
#include <iostream>
#include "ContactBook.h"
#include <windows.h>
using namespace std;


void clear(){

    cout<<endl;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout  <<"saving";
    for (int i = 2; i > 0; i--) {
           cout<<".";
           sleep(1);
    }
    system("CLS");

}


void check(){

    int ch;
    cout<<endl;
    cout<<"\033[33mPress Esc to return back to the main screen. \033[0m";
    do {
        ch=getch();
        if (ch==27){
        system("CLS");
        sleep(1);
        }
    }while (ch!=27);

}


void myFunction(string x) {

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << setw(50) << setfill('*') << "" << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    cout << setw(32) << setfill(' ') << x << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    cout << setw(50) << setfill('*') << "" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);

}

void StartScreen(){
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "*****************************************************" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "*                                                   *" << endl;
        cout << "*";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
        cout<<"              WELCOME TO MY PROJECT                ";
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"*" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout << "*                                                   *" << endl;
        cout << "*****************************************************" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout<<"\033[33m| 1 |\033[0m"<<" Add New Contact" << endl;
        cout<<"\033[33m| 2 |\033[0m"<<" Display All Contact" << endl;
        cout<<"\033[33m| 3 |\033[0m"<<" Search For a Contact" << endl;
        cout<<"\033[33m| 4 |\033[0m"<<" Edit Existing Contact" << endl;
        cout<<"\033[33m| 5 |\033[0m"<<" Delete Contact" << endl;
        cout<<"\033[33m| 0 |\033[0m"<<" Exit" << endl;
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "==========================================" << endl;
        cout << "Type your option : ";
}


int main(){

    ContactBook ContactBook(20);
    int d;

    while(true)
    {
        StartScreen();
        cin>> d;
        cout<<"\n\n\n";

        if (d==0){
            cout<<"\033[33mThanks for using my project :) \033[0m"<<endl;
            break;
        }


        if (d==1){

            system("CLS");
            myFunction("CONTACT ASSIGNMENT");
            ContactBook.add_user();
            clear();
        }


        if (d==2){
         system("CLS");
         myFunction("PERSONAL DETAILS");
         ContactBook.print();
         check();

        }


        if (d==3){
               int id;
               cout<<"[*] "<<"\033[33mEnter User's Id That You Want To Search: \033[0m";
               cin>>id;
               system("CLS");
               myFunction("SEARCHED RESULTS");
               ContactBook.searchUser(id);
               check();
            }


       if (d==4){
                int id=0;
                cout<<"[*] "<<"\033[33mEnter User's Id That You Want To Search: \033[0m";
                cin>>id;
                system("CLS");
                myFunction("EDIT CONTACT");
                ContactBook.edit_user(id);
                sleep(2);
                system("CLS");
            }


        if (d==5){
                int id=0;
                cout<<"[*] "<<"\033[33mEnter User's Id That You Want To Search: \033[0m";
                cin>>id;
                system("CLS");
                ContactBook.delete_user(id);
                sleep(2);
                system("CLS");
            }

        }


    return 0;
}
