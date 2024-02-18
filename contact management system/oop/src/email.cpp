#include "email.h"

email::email()
{

}
email::email(string email, string type)
{
    setemail(email);
    setType(type);
}
void email::setemail(string email){
    main_email=email;
}
void email::setType(string type){
    main_type=type;
}
bool email::check_match(string x){
 if (main_email==x)
    return true;
else
    return false;

}
void email::print(){
    cout<<main_email<<endl;
    cout<<"\033[33m * \033[0m"<<" email type: "<<main_type<<endl;
    cout<<endl;
}
