//inline
using namespace std;
#include<iostream>
inline void swap(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
cout<<a<<b;
}
int main()
{
int a,b;
cin>>a>>b;
swap(a,b);
return 0;
}


