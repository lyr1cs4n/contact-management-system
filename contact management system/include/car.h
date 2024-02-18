#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;
class car
{
    private:
        string maker;
        int model;
        string color;
    public:
        void setmaker (string maker);
        string getmaker ();
        void setmodel (int a);
        int getmodel();

        car(string m,int mo);
        ~car();

    protected:


};

#endif
