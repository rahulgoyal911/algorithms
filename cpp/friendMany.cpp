//a function which is friend of both the classes
using namespace std;
#include<iostream>
//forward declaration of class 
class integer;
class complex
{
	int a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		void display()
		{
			cout<<a<<" + i"<<b;
		}
		friend void addition(complex &c,integer  in);
};
class integer
{
	int n;
	public:
		void get()
		{
			cin>>n;
		}
		void display()
		{
			cout<<n;
		} 
		friend void addition(complex &c,integer in);
};
void addition(complex &c,integer in)
{
	c.a=c.a+in.n;
	c.b=c.b+in.n;
}
int main()
{
	complex ob;
	integer ob1;
	ob.get();
	ob1.get();
	ob.display();
	ob1.display();
	addition(ob,ob1); 
	cout<<endl;
	ob.display();
	return 0;
}

