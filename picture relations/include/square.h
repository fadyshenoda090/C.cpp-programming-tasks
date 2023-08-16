#ifndef SQUARE_H
#define SQUARE_H


class square
{
    int length;
public:
    void setlength(int _length)
    {
        length=_length;
    }
    int getlength()
    {
        return length;
    }
    square():square(1){}
    square(int _length)
    {
        length=_length;
    }
    int sqarea()
    {
        return length*length;
    }
};

#endif // SQUARE_H
