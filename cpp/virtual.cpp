using namespace std;
#include<iostream>
class A
{
A()
{
cout<<"private const";
}
//public:
friend class B;
};
class B
{
public:
B()
{
A a;
}
};
int main()
{
B a;
//a.get();
return 0;
}
