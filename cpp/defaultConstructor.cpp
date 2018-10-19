//default constructor 
using namespace std;
#include<iostream>
class complex
{
	int a,b;
	public:
	//default value is garbage
		complex()
		{
		a=2;
		b=3;
		}
		//another method
	//complex():a(2),b(3)
	//{
	//
	//}
	//preffered
		void put()
		{
		cout<<a<<b;
		}
};
int main()
{
	complex c1;
	c1.put();
}
