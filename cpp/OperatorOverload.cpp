//operator overloading
//4 operators cant be overloaded
//1.(.&.*)
//2.::
//3.sizeof()
//4.?:
//overloading of = operator is already done in program inbuild
//UNARY    -,++,--

//without returning anything
using namespace std;
#include<iostream>
/*
#include<iostream>
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	void operator- ()
	{
	a=-a;
	b=-b;
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 -c;
 -c1;
 c.put();
 cout<<endl;
 c1.put();
 return 0;
}
*/


//with returning object
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	complex operator- ()
	{
	complex temp;
	temp.a=-a;
	temp.b=-b;
	return temp;
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 c=-c1;
 c.put();
 cout<<endl;
 //c1.put();
 return 0;
}
*/



//using friend function
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	friend void operator- (complex &ob)
	{
	ob.a=-ob.a;
	ob.b=-ob.b;
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 -c1;
 c1.put();
 cout<<endl;
 //c1.put();
 return 0;
}

*/





//returning object+friend
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	friend complex operator- (complex &ob)
	{
	return complex(-ob.a,-ob.b);
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 c=-c1;
 c.put();
 cout<<endl;
 //c1.put();
 return 0;
}

*/



// increment operators [ post and pre]
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	void operator++ ()// pre increment
	{
	a=a+1;
	++b;
	}
	void operatot++(int)// post increment
	{
	a++;
	b++;
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 complex c2(2,3);
 ++c;
 ++c1;
 c2++;
 c.put();
 cout<<endl;
 c1.put();
 cout<<endl;
 c2.put();
 return 0;
}
*/


//return oject
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	complex operator++ ()
	{
	return complex(++a,++b);
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 c = ++c1;
 c.put();
 cout<<endl;
 //c1.put();
 return 0;
}
*/



//friend function
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	friend void operator++ (complex &ob)
	{
	++ob.a;
	++ob.b;
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 ++c;
 ++c1;
 c.put();
 cout<<endl;
 c1.put();
 return 0;
}
*/






//friend function+returning object
/*
class complex
{
	int a,b;
	public:
	complex():a(0),b(0)
	{
	}
	complex(int x,int y):a(x),b(y)
	{
	}
	void put()
	{
	cout<<a<<" +i"<<b;
	}
	friend complex operator++ (complex &ob)
	{
	return complex(ob.a++,ob.b++);
	}
};
int main()
{
 complex c;
 complex c1(4,5);
 c = ++c1;
 c.put();
 cout<<endl;
 //c1.put();
 return 0;
}
*/
