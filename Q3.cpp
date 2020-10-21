#include <bits/stdc++.h>
using namespace std;

class Quadrilateral{
 public:
     float ans=0,peri=0,a=0,b=0,c=0,d=0;
     void perimeter(){
     peri=a+b+c+d;
     cout<<peri<<"\n";
     }
     void area(){
         cout<<ans<<"\n";

     }

};
class trapezoid:public Quadrilateral{
public:
void get_side(float s1,float s2,float s3,float s4){
    a=s1;
    b=s2;
    c=s3;
    d=s4;
}
void get_value(float a,float b,float h){
    ans=((a+b)/2)*h;
}

};
class parallelogram : public Quadrilateral{
public:
    void get_side(float a1,float b2){
    a=c=a1;
    b=d=b2;
    }
void get_value(float b,float h){
    ans=b*h;
}

};
class rectangle :public Quadrilateral{
public:
void get_side(float l,float b1){
ans=l*b1;
c=a=l;
d=b=b1;

}


};
class Square :public Quadrilateral{
public:
    void get_side(float side){
        ans=side*side;
        b=c=d=a=side;

    }

};

int main()
{
 Square a;
 a.get_side(10);
 a.perimeter();
 a.area();

 rectangle r;
 r.get_side(10,14);
 r.perimeter();
 r.area();

 parallelogram p;
p.get_side(12,13);
 p.perimeter();
 p.get_value(10,15);
 p.area();

 trapezoid s;
 s.get_side(1,2,3,4);
 s.perimeter();
 s.get_value(1,2,3);
 s.area();


    return 0;
}
