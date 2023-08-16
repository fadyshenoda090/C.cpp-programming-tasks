#ifndef CIRCLE_H
#define CIRCLE_H


class circle
{
    float radius;
public:
    void setradius(float _radius)
    {
        radius=_radius;
    }
    float getradius()
    {
        return radius;
    }
    circle():circle(1){}
    circle(float _radius)
    {
        radius=_radius;
    }
    float circarea()
    {
        return radius*radius*3.14;
    }
};

#endif // CIRCLE_H
