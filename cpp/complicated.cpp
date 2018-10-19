//menber of one class and friend of n classes
using namespace std;
#include<iostream>
//addition member of complex class //also friend of n classes
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
		//no need to send object of complex class
		void addition(integer  in);
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
		//we have to use classname complex here
		friend void complex::addition(integer in);
};
//we never write friend outside
void complex::addition(integer in)
{
	a=a+in.n;
	b=b+in.n;
}
int main()
{
	complex ob;
	integer ob1;
	ob.get();
	ob1.get();
	ob.display();
	ob1.display();
	ob.addition(ob1); 
	cout<<endl;
	ob.display();
	return 0;
}

