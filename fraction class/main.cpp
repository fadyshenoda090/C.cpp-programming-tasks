#include <iostream>
#include "fraction.h"
using namespace std;
fraction operator +(int x, fraction fra)
{
    fraction temp;
    temp.nomirator=(fra.dominator * x)+fra.nomirator ;
    temp.dominator=fra.dominator ;

    return temp;
}
//fraction operator ++(fraction fra,int x) //postfix
//{
//    fraction temp;
//    temp.nomirator= fra.nomirator+fra.dominator;
//    temp.dominator=fra.dominator;
//    return temp ;
//}
ostream& operator <<(ostream& output,fraction fra)
{
    output<<fra.nomirator<<"/"<<fra.dominator<<" = "<< fra.nomirator / fra.dominator <<endl;
    return output;
}
istream& operator >> (istream& input,fraction &fra)
{
    input>>fra.nomirator>>fra.dominator;
    return input;
}
int main()
{

    //int x,y;
    fraction f1;
    //f1.print();
    fraction f2;
    cin>>f2;
    fraction fsum;
    fsum=f1+f2;
    fraction f3=f1+4;
    fraction f4=4+f1;
    bool check1=f2>f1;
    if(check1 ==true)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }
    bool check2=f2==f1;
    if(check2 ==true)
    {
        cout<<"the are equal"<<endl;
    }
    else
    {
        cout<<"they are not equal"<<endl;
    }
//cout<<f1<<endl<<fsum<<endl<<f3<<endl<<f4<<endl;
cout<<++f2<<endl;
cout<<f2++<<endl;
cout<<f2<<endl;
    return 0;
}
