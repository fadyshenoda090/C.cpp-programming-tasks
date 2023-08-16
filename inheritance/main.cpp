#include <iostream>
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
//    shape u;
   square s ;
//  s.setdim(5);
//    r.setheight(5);
//    circle c;
//    c.setdim(7);
   // cout<<"square area\n"<<s.calcarea()<<endl<<"rectangle area\n"<<r.calcarea()<<endl<<"circle area\n"<<c.calcarea()<<endl;
    shape*sq=new square();
    sq->setdim(8);
    shape* sc=new circle();
    sc->setdim(5);
    shape*sr=new rectangle(6,5);
//    sr->setdim(5);
    rectangle r;
//    r.setheight(6);
cout<<s.getcounter()<<endl;
    cout<<"square calcarea --> "<<sq->calcarea()<<endl;
    cout<<"circle calcarea --> "<<sc->calcarea()<<endl;
    cout<<"rectangle calcarea --> "<<sr->calcarea()<<endl;
    return 0;
}
