using namespace std;
#include<iostream>
template<class T,class U>
class A
{
T q;
U w;
public:
A(T a,U b)
{
q=a;
w=b;
}
U fun()
{
return q+w;
}
};

int main()
{
A<int,float> a(5,5.1);
float a1=a.fun();
cout<<a1;
}
