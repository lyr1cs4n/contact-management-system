#include "ContactBook.h"

ContactBook::ContactBook(int size)
{
    main_size=size;
    main_count=0;
    main_users=new contact [main_size];
}


void ContactBook::add_user(){
    contact* temp_user= new contact();
    temp_user->set_id(main_count+1);
    temp_user->input();
    main_users[main_count]=*temp_user;
    main_count++;
}


void ContactBook::delete_user(int id){
    bool check=false;
    bool check2=false;
    if (main_count!=0){
        for (int i=0;i<main_count;i++){
            if (main_users[i].get_id()==id){
                if (i==main_count-1){
                    main_count--;
                    check=true;
                    break;
                }if (i!=main_count-1){
                    main_users[i]=main_users[main_count-1];
                    main_count--;
                    check=true;
                    break;
                }
            }else {
            check2=true;
            }
        }
        if (check){
        cout<<"\033[33mDelete completed\033[0m"<<endl;
        }
        if (check2){
        cout<<"\033[33mID not found\033[0m"<<endl;
        }
    }else {
    cout<<"\033[33mList is empty.\033[0m"<<endl;
    }
}


void ContactBook::edit_user(int id){
    bool check=false;
    if (main_count!=0){
        for (int i=0;i<main_count;i++){
            if (main_users[i].get_id()==id){
              main_users[i].input();
              check=true;
              break;
            }
        }if (check){
        cout<<"\033[33medit is completed.\033[0m"<<endl;
        }else {
        cout<<"\033[33mFailed to edit, User not found.\033[0m"<<endl;
        }
    }else {
    cout<<"\033[33mList is empty.\033[0m"<<endl;
    }
}


void ContactBook::print(){
    if(main_count!=0){
        for (int i=0;i<main_count;i++){
            main_users[i].print();
        }
    }else {
    cout<<"\033[33mList is empty.\033[0m"<<endl;
    }
}


void ContactBook::searchUser(int id){
    bool check=false;
    if (main_count!=0){
        int i=0;
        for (;i<main_count;i++){
            if (main_users[i].get_id()==id){
              check=true;
              break;
            }
        }if (check){
        cout<<"\033[33muser is found\033[0m\n\n";
        main_users[i].print();
        }else {
        cout<<"\033[33muser is not found.\033[0m"<<endl;

        }
    }else {
        cout<<"\033[33mList is empty.\033[0m"<<endl;
    }
}


