#ifndef POLYMOROHISM_H
#define POLYMOROHISM_H
#include <iostream>
using namespace std;
class creature
{
public:
    virtual void move()=0;
    void eat()
    {
        cout<<"creature eat\n";
    }
};
class human:public creature
{
public :
    void move()
    {
        cout<<"human move\n";
    }
};
class male:public human
{
public:
    void move()
    {
        cout<<"i'm a male human\n";
    }
};
class animal:public creature
{
public:
    void move ()
    {
        cout<<"animal move \n";
    }
};
class dog:public animal
{
    void move ()
    {
        cout<<"dog move\n";
    }
};
class gaming
{
public:
    void moveitems(creature* c)
    {
        c->move();
    }
};
#endif // POLYMOROHISM_H
