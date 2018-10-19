//destructor
using namespace std;
#include<iostream>
class complex
{
	int a,b;
	public:
		//coonstructor 
		complex(int x,int y)
		{
		a=x;
		b=y;
		}
		//destructor
		~complex()
		{
		cout<<"destructing";
		}
		void put()
		{
		cout<<a+b<<endl;
		}
		void fun()
		{
		complex ob(8,9);
		ob.put();
		}
};
int main()
{	
//	fun();
	complex ob1(5,6);
	complex ob2(ob1);
	ob1.fun();
	ob1.put();
	ob2.put();
}
