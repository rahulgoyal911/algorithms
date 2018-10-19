using namespace std;
#include<iostream>
class A;
int a=5;
int b=6;
int c=7;
class D;
class B;
class C;
class A{
public:
void put(){
cout<<a<<endl;
}
};
class B:virtual public A
{
public:
void putd(){
cout<<b<<endl;
}
};
class C:virtual public A
{
public:
void pute(){
cout<<c<<endl;
}
};
class D:public B,public C{

};
main()
{
D d;
d.put();
//b.put();
}







