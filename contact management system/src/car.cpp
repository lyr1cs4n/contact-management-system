#include "car.h"
#include <iostream>
void car::setmaker(string m){
   maker=m;

}
string car::getmaker(){
return maker;
}
void car::setmodel(int a){
model=a;
}
int car::getmodel(){
return model;
}
car::car(string m,int mo):model(mo),maker(m)
{

}

car::~car()
{

}
