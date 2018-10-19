//constructors + inheritence
using namespace std;
#include<iostream>
class base
{
	int a,b;
	public:
	base(int x,int y)
	{
	a=x;
	b=y;
	}
	void put()
	{
	cout<<a<<","<<b<<endl;
	}
};
class derived:public base
{
	int c;
	public:
	//how to send to base class
	derived(int x,int y,int z):base(x,y)
	{
	c=z;
	}
	void put()
	{
	cout<<c;
	}
	
	
};
int main()
{
derived obj(4,5,6);
//how to call function  of base class
obj.base::put();
obj.put();
return 0;
}


