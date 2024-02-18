#include "phone.h"

phone::phone(){
}
phone::phone(string phone, string type)
{
    setPhone(phone);
    setType(type);
}
void phone::setPhone(string phone){
    main_phone=phone;
}
void phone::setType(string type){
    main_type=type;
}
bool phone::check_match(string x){
 if (main_phone==x)
    return true;
else
    return false;

}
void phone::print(){
    cout<<main_phone<<endl;
    cout<<"\033[33m * \033[0m"<<" phone type: "<<main_type<<endl;
    cout<<endl;
}
