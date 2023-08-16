#ifndef PICTURE_H
#define PICTURE_H
#include "square.h"
#include "rectangle.h"
#include"circle.h"
using namespace std;
class picture
{
    //composition
    square s;
    rectangle* rect;

public:
    void sets(square _s)
    {
        s=_s;
    }
    square gets()
    {
        return s;
    }
    void setrectangle(rectangle* _rect)
    {
        rect=_rect;
    }
    rectangle* getrectangle()
    {
        return rect;
    }
    picture ():picture(1){}
    picture (square _s)
    {
        s=_s;
    }
    int getradius(circle rad)
    {
        return rad.getradius();
    }
    void print()
    {
        cout<<"finished\n";
    }
    float totalarea(int a,int b,float c)
    {
        return a+b+c;
    }
};

#endif // PICTURE_H
