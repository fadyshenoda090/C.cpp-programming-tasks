#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle:public shape
{
    int height;
public:
    void setheight( int _height)
    {
        height=_height;
    }
    int getheight()
    {
        return height;
    }
   rectangle():rectangle(1,dim){}
   rectangle(int _height,int dim):shape (dim)
    {
       height=_height;
   }
//    int calcarea()
//    {
//        return height*dim;
//    }
float calcarea()
{
    return dim*height;
}
};
#endif // RECTANGLE_H
