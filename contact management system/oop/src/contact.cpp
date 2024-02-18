#include "contact.h"

contact::contact()
{
    phone_size = 3;
    address_size=3;
    email_size=3;

    main_phones = new phone[phone_size];
    main_addresses = new address[address_size];
    main_emails = new email[email_size];

    email_count=0;
    phone_count=0;
    address_count=0;
    added_time = __DATE__;

}


void contact::set_name(string x){
    main_name = x;
}
void contact::set_id(int x){
    main_id = x;
}
void contact::set_city(string x){
    main_city = x;
}
void contact::set_age(string x){
    main_age = x;
}
void contact::set_gender(string x){
    main_gender = x;
}
int contact::get_id(){
    return main_id;
}
bool contact::is_integer(string x){
    bool ischar=false;
    for (int i = 0; i < x.length(); i++) {
        if (!isdigit(x[i])) {
            ischar = true;
            break;
        }
    }if(ischar){
    return false;
    }else {
    return true;
    }

}
void contact::input(){

    string age;
    string gender;
    string name,city;



    cout<<"\033[33m[1]\033[0m"<<" Name: ";
    cin.ignore();
    getline (cin,name);
    set_name(name);
    cout<<endl;



    cout<<"\033[33m[2]\033[0m"<<" Age: ";
    cin>>age;
    do{
    if (is_integer(age)){
        set_age(age);
        break;
    }
    else {
        cout<<endl;
        cout<<"\033[33mWrong input, try again\033[0m"<<endl;
        cout<<endl;
         cout<<"\033[33m[*]\033[0m"<<" Age: ";
        cin>>age;
    }
    }while (true);
    cout<<endl;



    cout<<"\033[33m[3]\033[0m"<<" Gender [0 for male, 1 for female]: ";
    cin>>gender;
    do{
    if (gender=="0"||gender=="1"){
    set_gender(gender);
    break;
    }
    else {
        cout<<endl;
        cout<<"\033[33mWrong input, try again\033[0m"<<endl;
        cout<<endl;
        cout<<"\033[33m[*]\033[0m"<<" Gender [0 for male, 1 for female]: ";
        cin>>gender;
    }
    }while (true);



    cout<<endl;
    cout<<"\033[33m[4]\033[0m"<<" City: ";
    cin.ignore();
    getline (cin,city);
    set_city(city);
    cout<<endl;
    cout<< "================================"<<endl<<endl;




    int i=0;
    cout<<"\033[33m[5]\033[0m"<<" Phone numbers [allowed from 0 to "<<phone_size<<"] : ";
    cin>>i;
        do{
    if (i>=0&&i<=phone_size){
    break;
    }
    else {
        cout<<endl;
        cout<<"\033[33mWrong input, try again\033[0m"<<endl;
        cout<<endl;
        cout<<"Type valid size : ";
        cin>>i;
    }
    }while (true);
    cout<<endl;




    int sum=i;
    while (i!=0){
        string phones,type;
        cout<<"\033[33m[*]\033[0m"<<" Phone number : ";
        cin>>phones;
    do{
    if (is_integer(phones)){
    break;
    }
    else {
        cout<<endl;
        cout<<"\033[33mWrong input, try again\033[0m"<<endl;
        cout<<endl;
        cout<<"Type valid Number : ";
        cin>>phones;
    }
    }while (true);
        cout<<endl;
        cout<<"\033[33m[*]\033[0m"<<" Phone type : ";
        cin>>type;
        cout<<endl;

        phone* temp_phone= new phone(phones,type);
        main_phones[sum-i]= *temp_phone;
        phone_count++;
        i--;
    }
    cout<< "================================"<<endl;
    cout<<endl;



    i=0;
    cout<<"\033[33m[6]\033[0m"<<" Address [allowed from 0 to "<<address_size<<"] : ";
    cin>>i;
    do{
    if (i>=0&&i<=address_size){
    break;
    }
    else {
        cout<<endl;
        cout<<"Wrong input, try again"<<endl;cout<<"\033[33mWrong input, try again\033[0m"<<endl;cout<<endl;
        cout<<"Type valid size : ";
        cin>>i;
    }
    }while (true);
    cout<<endl;
     sum=i;
    while (i!=0){
        string place,type;
         cout<<"\033[33m[*]\033[0m"<<" Address place : ";
        cin.ignore();
        getline(cin,place);
        cout<<endl;
         cout<<"\033[33m[*]\033[0m"<<" Address type : ";
        cin.ignore();
        getline(cin,type);
        cout<<endl;
        address* temp_address= new address(place,type);
        main_addresses[sum-i]= *temp_address;
        address_count++;
        i--;
    }
    cout<< "================================"<<endl;
    cout<<endl;




    i=0;
    cout<<"\033[33m[7]\033[0m"<<" emails [allowed from 0 to "<<email_size<<"] : ";
    cin>>i;
       do{
    if (i>=0&&i<=email_size){
    break;
    }
    else {
        cout<<endl;
        cout<<"\033[33mWrong input, try again\033[0m"<<endl;
        cout<<endl;
        cout<<"Type valid size : ";
        cin>>i;
    }
    }while (true);
    cout<<endl;
     sum=i;
    while (i!=0){
        string emails,type;
        cout<<"\033[33m[*]\033[0m"<<" Email : ";
        cin>>emails;
        cout<<endl;
        cout<<"\033[33m[*]\033[0m"<<" Email type : ";
        cin.ignore();
        getline(cin,type);
        cout<<endl;
        email* temp_email= new email(emails,type);
        main_emails[sum-i]= *temp_email;
        email_count++;
        i--;
    }
    cout<< "================================"<<endl;
}




void contact::print(){
    cout<< "================================"<<endl;
    cout<<"\033[33mID : \033[0m"<<main_id<<endl<<endl;
    cout<<"\033[33m[1]\033[0m"<<" Name : "<<main_name<<endl;
    cout<<"\033[33m[3]\033[0m"<<" Age : "<<main_age<<endl;
    if (main_gender=="0"){
        cout<<"\033[33m[2]\033[0m"<<" Gender : Male"<<endl;
    }if (main_gender=="1"){
        cout<<"\033[33m[2]\033[0m"<<" Gender : Female"<<endl;
    }
    cout<<"\033[33m[3]\033[0m"<<" City : "<<main_city<<endl;
    cout<<endl;
    for (int i=0;i<phone_count;i++){
            cout<<"\033[33m[4]\033[0m"<<" Phone number "<<i+1<<" : ";
            main_phones[i].print();
    }
    for (int i=0;i<address_count;i++){
            cout<<"\033[33m[5]\033[0m"<<" Address "<<i+1<<" : ";
            main_addresses[i].print();
    }
    for (int i=0;i<email_count;i++){
            cout<<"\033[33m[6]\033[0m"<<" Email "<<i+1<<" : ";
            main_emails[i].print();
    }
    cout<<"\033[33m[7]\033[0m"<<" Date : "<<added_time<<endl;
    cout<< "================================"<<endl;
    cout<<endl;
}


