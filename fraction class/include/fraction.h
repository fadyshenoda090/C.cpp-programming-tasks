#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
using namespace std;
class fraction
{

    float nomirator;
    float dominator;

public:
    fraction():fraction(1,1) {}

    fraction(float _nomirator):fraction(_nomirator,1) {}

    fraction(float _nomirator,float _dominator)
    {
        nomirator=_nomirator;
        dominator=_dominator;
    }
    fraction operator +(fraction fra)
    {
        fraction temp;
        temp.nomirator=(this->nomirator * fra.dominator)+(this->dominator * fra.nomirator);
        temp.dominator=this->dominator * fra.dominator;

        return temp;
    }
    fraction operator +(int x)
    {
        fraction temp;
        temp.nomirator=(dominator * x)+nomirator ;
        temp.dominator=dominator ;

        return temp;
    }
    fraction& operator ++() //prefix
    {
        nomirator+=dominator;
        return *this;
    }
    fraction operator ++(int x)//postfix
    {
        fraction add(this->nomirator,this->dominator);
        nomirator=this->nomirator+this->dominator;

        return add;
    }
    bool operator > (fraction fra)
    {
        return nomirator / dominator >fra.nomirator /fra.dominator;
    }

    bool operator == (fraction fra)
    {
        return nomirator / dominator == fra.nomirator /fra.dominator;
    }
    void setnomirator(float _nomirator)
    {
        nomirator=_nomirator;
    }
    float getnomirator()
    {
        return nomirator;
    }
    void setdominator(float _dominator)
    {
        dominator=_dominator;
    }
    float getdominator()
    {
        return dominator;
    }

    void print()
    {
        cout<<"default values are\n"<<nomirator<<"/"<<dominator<<" = "<< nomirator / dominator <<endl;
    }
    friend fraction operator +(int x, fraction fra);
    friend ostream& operator <<(ostream& output,fraction fra);
    friend istream& operator >> (istream& input,fraction &fra);
//friend fraction operator ++(fraction fra,int x);
};

#endif // FRACTION_H
