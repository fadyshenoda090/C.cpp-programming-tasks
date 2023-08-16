#ifndef SQUARE_H
#define SQUARE_H


class square:public shape
{
public:
    square():square(1){}
    square(int _dim)
    {
        dim=_dim;
    }
//    int calcarea()
//    {
//        return dim*dim;
//    }
    float calcarea()
    {
        return dim*dim;
    }
};


#endif // SQUARE_H
