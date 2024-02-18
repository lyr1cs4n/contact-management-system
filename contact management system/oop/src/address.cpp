#include "address.h"

address::address(){
}
address::address(string address, string type)
{
    setaddress(address);
    setType(type);
}
void address::setaddress(string address){
    main_place=address;
}
void address::setType(string Type){
    main_type=Type;
}
bool address::check_match(string x){
 if (main_place==x)
    return true;
else
    return false;

}
void address::print(){
    cout<<main_place<<endl;
    cout<<"\033[33m * \033[0m"<<" address type: "<<main_type<<endl;
    cout<<endl;
}
