#include <bits/stdc++.h>
using namespace std;
class A{
public:
A(){
cout<<"default construct--I am in class A(God class)\n";

}
A(int a){
cout<<"Class A parame constructor\n";
}

};
class B:public A{
public:
B(){

cout<<"default costructor---now i am in class B\n";
}
B(int a){
cout<<"Class b parame constructor\n";
}
};
class C:public A,public B{
public:
    C(){

    cout<<"default constructor--this one is class C\n";

    }
    C(int a){

    cout<<"default constructor--this one is class C\n";

    }


};
class D:public B{
    public:
D(){

cout<<"Class D default constructor\n";}

D(int a){
    cout<<"Class D para--constructor\n";

}
};
int main()
{
D d;
C c(1);



    return 0;
}