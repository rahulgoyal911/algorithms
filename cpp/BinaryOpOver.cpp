//binary operator overloading
//+ - / * 
//to add two complex numbers
//we will always do this with return value
//edited
using namespace std;
//
#include<iostream>





//with return value
/*
class complex
{	
	private:
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
		complex operator+(complex ob);
		//{
			//defined outside
		//}	
};
complex complex::operator+(complex ob)
{
	//temp object or anonymous object
	return complex(a+ob.a,b+ob.b);
}
int main()
{
	int x,y;
	cin>>x>>y;
	complex c1(x,y);
	cin>>x>>y;
	complex c2(x,y);
	complex c;
	c=c1+c2;
	c.put();
	return 0;
}
*/




/*
//friend+return type
class complex
{	
	private:
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
		friend complex operator+(complex ob,complex ob1)
		{
			return complex(ob1.a+ob.a,ob1.b+ob.b);
		}	
};
int main()
{
	int x,y;
	cin>>x>>y;
	complex c1(x,y);
	cin>>x>>y;
	complex c2(x,y);
	complex c;
	c=c1+c2;
	c.put();
	return 0;
}
*/	



//RELATIONAL OPERAION IN STRING 
#include<string.h>
class string1
{
	int len;
	char *name;
	public:
		string1()
		{
		len=0;
		name= new char;
		}
		string1(char *s)
		{	
		len=strlen(s);
		name=new char[len+1];
		strcpy(name,s);
		}
		string1 operator+(string1 &ob)
		{
			string1 t;
			t.len=len+ob.len;
			//delete name;
			t.name = new char[t.len+1];
			strcpy(t.name,name);
			strcat(t.name,ob.name);
			ob=t;
			return ob;
		}
		void put()
		{
		cout<<name;
		}
};
int main()
{

	//we have to do typecasting here
	char *h=((char *)"hello");
	string1 a(h);
	string1 b((char *)"bye");
	string1 c;
	c=a+b;
	//a is calling function and b is passed as argument
//	if(a==b)
//		cout<<"Equal"<<endl;
//	if(a<=b)
//		cout<<"Less than"<<endl;
	c.put();
}

