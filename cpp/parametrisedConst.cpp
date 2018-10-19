//parametrised constructor 
using namespace std;
#include<iostream>
class complex
{
	int a,b;
	public:
		complex(int x,int y)
		{
		a=x;
		b=y;
		}
		void put()
		{
		cout<<a<<b;
		}
};
int main()
{
	//implicit
	complex c1(2,3);
	//explicit
	//complex c1=complex(2,3);
	c1.put();
}
