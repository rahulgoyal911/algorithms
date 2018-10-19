//passsing pointer argument in member function by reference
//using 3 objects
using namespace std;
#include<iostream>
class swapvar
{
	private:
		int a;
	public:
		void get()
		{
			cin>>a;
		}
		void swap1(swapvar *o,swapvar *o1)
		{
			int temp;
			temp=o->a;
			o->a=o1->a;
			o1->a=temp;
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
	ob2.swap1(&ob,&ob1);
	ob.display();
	ob1.display();
	return 0;
}




//using 2 objects
using namespace std;
#include<iostream>
class swapvar
{
	private:
		int a;
	public:
		void get()
		{
			cin>>a;
		}
		void swap1(swapvar *o1)
		{
			int temp;
			temp=a;
			a=o1->a;
			o1->a=temp;
		}
		void display()
		{
			cout<<a;
		}
};
int main()
{
	swapvar ob,ob1;
	ob.get();
	ob1.get();
	ob.swap1(&ob1);
	//ob directly
	//ob1using arrow and object
	ob.display();
	ob1.display();
	return 0;
}
