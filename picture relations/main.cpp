#include <iostream>
#include "picture.h"
using namespace std;

int main()
{
    square s(9);
    picture p(s);
    rectangle r(10,7);
    p.setrectangle(&r);
    circle *circ=new circle();
    circ->setradius(6);
    cout<<"square data\n"<<p.gets().getlength()<<endl<<"square area\n"<<p.gets().sqarea()<<endl;
    cout<<"rectangle data\n"<<p.getrectangle()->getheight()<<endl<<p.getrectangle()->getwidth()<<endl<<"rectangle area\n"<<p.getrectangle()->recarea()<<endl;
    cout<<"circle area\n"<<circ->circarea()<<endl;
    cout<<p.totalarea(p.gets().sqarea(),p.getrectangle()->recarea(),circ->circarea());
    return 0;
}
