//type conversion
//1.basic to class
//2.class to basic
//3.class to class

//class to base
#include<string.h>
#include<cstring>
#include<sstream>
#include<math.h>
#include<cmath>
using namespace std;
#include<iostream>
/*
class A
{
int m,km;
public:
	A()
	{
	m=0;
	km=0;
	}
	void getdata()
	{
	cin>>km>>m;
	}
	operator int()
	{
	int temp;
	temp=km*1000+m;
	return temp;
	}
	operator float()
	{
	float temp;
	temp=m+(float)km/1000;
	return temp;
	}
};
int main()
{
A ob;
ob.getdata();
int metres;
metres=ob;
float kilo;
kilo=ob;
cout<<kilo<<endl<<metres;
return 0;
}
*/




//base to class
/*
class A
{
	int km,m;
	public:
	A()
	{
	km=m=0;
	}
	A(int a)
	{
	km=a;
	}
	void show()
	{
	m=km*1000;
	cout<<m<<endl;
	}

};
int main()
{
int dist;
cin>>dist;
A ob(dist);
ob.show();
return 0;
}
*/
class circle;
class rectangle
{
	float area;
	int l,b;
	public:
	rectangle()
	{
		l=b=0;
	}
	rectangle(float v)
	{
		l=b=v;
	}
	int ar()
	{
		return area;
	}
	void calculate()
	{
		area=l*b;
	}
};
class circle
{
	float carea,r;
	public:
	circle()
	{
		r=0;
	}
	void operator=(rectangle r1)
	{
		carea=r1.ar();
	}
	operator float()
	{
		float rad=sqrt(carea/3.14);
		return rad;
	}
};
int main()
{
	circle c;
	rectangle r;
	float radius;
	int value;
	cin>>value;
	r=value;//base to class type
	r.calculate();
	c=r;//class to class type
	radius=c;//class to base type
	cout<<radius;
	return 0;
}
