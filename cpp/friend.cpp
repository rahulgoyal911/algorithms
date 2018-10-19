#include <iostream>
using namespace std;
class B;
class A
{
	int a;
	public:
	friend void funn(A a1,B b1);
	void initialise(int z)
	{
	a=z;
	}
};
class B
{
	int a;
	public:
	friend void funn(A a1,B b1);
	void initialise(int z)
	{
	a=z;
	}
};
//no need to mention friend here
void funn(A a1,B b1)
{
	int add;
	add=a1.a+b1.a;
	cout<<add<<"asd";
}
int main()
{
	class A A1;
	class B B1;
	a1.initialise(10);
	b1.initialise(20);
	funn(A1,B1);
	return 0;
}







