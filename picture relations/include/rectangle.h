#ifndef RECTANGLE_H
#define RECTANGLE_H


class rectangle
{
    int height,width;
public:
    void setheight(int _height)
    {
        height=_height;
    }
    int getheight()
    {
        return height;
    }
    void setwidth(int _width)
    {
        width=_width;
    }
    int getwidth()
    {
        return width;
    }
    rectangle():rectangle(1,1) {}

    rectangle(int _height):rectangle(_height,1) {}

    rectangle(int _height,int _width)
    {
        height=_height;
        width=_width;
        }
    int recarea()
    {
        return height*width;
    }
};

#endif // RECTANGLE_H
