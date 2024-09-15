#ifndef point_h
#define point_h

#include "iostream"
#include "math.h"
using namespace std;
class Point{
private:
    double x,y;
public:
    Point(double x=0,double y=0):x(x),y(y){};
    void move(double dx,double dy);
    double distance(Point u);
    friend istream& operator>>(istream &is,Point &u);
    friend ostream& operator<<(ostream &os,Point u);
    friend Point operator+(Point u, Point v);
    void operator+=(Point u);
};



#endif // point_h
