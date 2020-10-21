#include<iostream>
using namespace std;
class Shape
{
protected:
    double length;
    double area;
public:
    double getLength()
    {
        return length;
     }
    double getArea()
    {
        return area;
     }
};
class Shape_2D:public Shape
{
protected:
    double perimeter;
public:
    double getPerimeter()
    {
        return perimeter;
    }
};
class Circle: public Shape_2D
{
public:
    Circle( double Radius = 0)
    {
        length = Radius;
        area =3.14*length*length;
        perimeter =3.14*2*length;
    }
};
class Square: public Shape_2D
{
public:
    Square( double Size = 0)
    {
        length=Size;
        area=length*length;
        perimeter=4*length;
    }
};
class Triangle:public Shape_2D
{
public:
    Triangle( double Size = 0)
    {
        length=Size;
        area=0.433*length*length;
        perimeter =3*length;
    }
};
class Shape_3D:public Shape
{
protected:
    double volume;
public:
    double getVolume()
    {
         return volume;
    };
};
class Cube:public Shape_3D
{
public:
    Cube( double Size=0)
    {
        length=Size;
        area=6*length*length;
        volume=length*length*length;
    }
};
class Sphere:public Shape_3D
{
public:
    Sphere( double Radius = 0)
    {
        length=Radius;
        area=4*3.14*length*length;
        volume=4.0/3*3.14*length*length*length;
    }
};
int main()
{
    Circle cir(2);
    cout <<"Circle:\n"<<"  Circumference="<<cir.getPerimeter()<<'\n'<<"  Area="<<cir.getArea()<<'\n';
    Square sq(2);
    cout <<"\nSquare:\n"<<"  Perimeter="<<sq.getPerimeter()<<'\n'<<"  Area="<<sq.getArea()<<'\n';
    Triangle tr(2);
    cout <<"\nTriangle:\n"<<"  Perimeter="<<tr.getPerimeter()<<'\n'<<"  Area="<<tr.getArea()<<'\n';
    Cube cube(2);
    cout <<"\nCube:\n"<<"  Curved Surface Area="<<cube.getArea()<<'\n'<<"  Volume="<<cube.getVolume()<<'\n';
    Sphere sphr(2);
    cout <<"\nSphere:\n"<<"  Curved Surface Area="<<sphr.getArea()<<'\n'<<"  Volume="<<sphr.getVolume()<<'\n';
    return 0;
}
