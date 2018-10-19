using namespace std;
#include<iostream>
//pointer to a class
//static memory
/*
class abc
{
	int a,b;
	public:
	abc(int x,int y)
	{
	a=x;
	b=y;
	}
	void print()
	{
	cout<<a<<b;
	}
};
int main()
{
	abc ob(2,3);
	//creating bject
	abc *pob;
	pob=&ob;
	ob.print();
	//pointer to a class
	pob->print();	
	return 0;
}
*/




//pointer to a class
//dynamic memory
/*
class abc
{
	int a,b;
	public:
	abc(int x,int y)
	{
	a=x;
	b=y;
	}
	void print()
	{
	cout<<a<<b;
	}
};
int main()
{
	abc ob(2,3);
	//creating bject
	abc *pob=new abc(2,3);
	pob=&ob;
	ob.print();
	//pointer to a class
	pob->print();	
	return 0;
}*/




//pointer to datamember
//that pointer is mot a member of class
/*
class abc
{
	
	public:int a,b;
	abc(int x,int y)
	{
	a=x;
	b=y;
	}
};

int main()
{	
	//pointer pointing to datamember of class
	int abc::*pa = &abc::a;
	abc ob(2,3);
	abc *pob;
	pob = &ob;
	//four options
	cout<<ob.a;
	//cout<<pob->a;
	//cout<<ob.*a;
	//cout<<pob->*pa;
	return 0;
}
*/



//pointer to member function
/*
class abc
{
	
	public:int a,b;
	abc(int x,int y)
	{
	a=x;
	b=y;
	}
	void print()
	{
	cout<<a<<b;
	}
};

int main()
{	
	int abc::*pa = &abc::a;
	abc ob(2,3);
	abc *pob;
	pob = &ob;
	void( abc::*point )() = &abc::print;
	ob.print();
	pob->print();
	(ob.*point)();
	(pob->*point)();
	return 0;
}
*/









