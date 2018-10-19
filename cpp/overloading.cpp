//overloading 
using namespace std;
#include<iostream>
void area(int a,int b)
{
cout<<a*b<<endl;
}
void area(int a,int b,int c)
{
cout<<a*b*c<<endl;
}
int main()
{
area(5,6);
area(5,6,7);
}

