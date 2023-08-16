#ifndef CIRCLE_H
#define CIRCLE_H


class circle:public shape
{
public:
    circle():circle(1){}
    circle(int _dim)
    {
        dim=_dim;
    }
//    float calcarea()
//    {
//        return 3.14*dim*dim;
//    }
//
float calcarea()
{
    return dim*dim*3.15;
}
};

#endif // CIRCLE_H
