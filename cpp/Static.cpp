//static data member
using namespace std;
#include<iostream>
class amainer
{
	static int a;
public:
	void inc()
	{
	a++;
	}
	void dis()
	{
	cout<<a;
	}
};
int amainer::a;
int main()
{
	amainer a,b,c;
	a.inc();
	b.inc();
	c.inc();
	a.dis();
	b.dis();
	c.dis();
	return 0;
}
//----------------------------------------------------------------------------

//static member function
using namespace std;
#include<iostream>
class amainer
{
	static int a;
public:
	void inc()
	{
	a++;
	}
	static void dis()
	{
	cout<<amainer::a;
	}
};
int amainer::a;
int main()
{
	amainer a,b,c;
	a.inc();
	b.inc();
	c.inc();
	a.amainer::dis();
	b.amainer::dis();
	c.amainer::dis();
	return 0;
}
