//returning object from a function
using namespace std;
#include<iostream>
class swapvar
{
	int a;
	public:
		//it is returning an object so returntype would be classname
		swapvar add(swapvar o)
		{
			//temporary object
			swapvar temp;
			temp.a=a+o.a;
			return temp;
		}
		void get()
		{	
			cin>>a;
		}
		void display()
		{
			cout<<a;
		}
};
int main()
{
	swapvar ob,ob1,ob2;
	ob.get();
	ob1.get();
	//storing returned value
	ob2=ob.add(ob1);
	ob2.display();
	return 0;
}	

