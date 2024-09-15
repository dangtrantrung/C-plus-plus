#include "point.h"

    void Point::move(double dx,double dy){
    this->x+=dx;
    this->y+=dy;
    }
    double Point::distance(Point u){
        return sqrt(pow(this->x-u.x,2)+pow(this->y-u.y,2));
    }
    istream& operator>>( istream &is,Point &u){
        is>>u.x>>u.y;
        return is;
    }
    ostream& operator<<(ostream &os,Point u){
        os<<u.x<<" "<<u.y<<endl;
        return os;
    }
    Point operator+(Point u, Point v){
        Point res(u.x+v.x,u.y+v.y);
        return res;
    }
    void Point::operator+=(Point u){
        this->x+=u.x;
        this->y+=u.y;
    }




