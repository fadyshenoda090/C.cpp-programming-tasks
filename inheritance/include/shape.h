#ifndef SHAPE_H
#define SHAPE_H


class shape
{
protected:
    static int counter;
    int dim;
public:
    virtual  float calcarea()=0;
    shape():shape(1)
    {
        counter++;
    }
    void setcounter(int _counter)
    {
        counter=_counter;
    }
    int getcounter()
    {
        return counter;
    }
    void setdim(int _dim)
    {
        dim=_dim;
    }
    int getdim()
    {
        return dim;
    }
    //shape() {}
    shape(int _x)
    {
        dim=_x;
    }

};
int shape :: counter=0;
#endif // SHAPE_H
