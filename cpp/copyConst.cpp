//copy constructor
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
		//reference only
		complex(complex &ob)
		{
		a=ob.a;
		b=ob.b;
		}
		void put()
		{
		cout<<a<<b;
		}
};
int main()
{
	int x,y;
	cin>>x>>y;
	complex c(x,y);
	complex c1(c);
	//amother method
	//complex c2=c;
	c.put();
	c1.put();
}
