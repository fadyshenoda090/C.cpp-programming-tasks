#include <iostream>
#include "polymorohism.h"
using namespace std;

int main()
{
    //human*h1=new human();
    creature*ch=new human();
    ch->move();
    creature*ca=new animal();
    ca->move();
    animal *ad=new dog();
    ad->move();
    creature*m=new male();
    m->move();
    gaming g;
    g.moveitems(ad);
    return 0;
}
