//call by value
using namespace std;
#include<iostream>
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<a<<b;
	swap(a,b);
	return 0;
}

//call by pointer
using namespace std;

#include<iostream>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<*a<<*b;
}
int main()   //main function starts here
{
	int a,b;
	cin>>a>>b;
	cout<<a<<b;
	swap(&a,&b);
	cout<<a<<b;
return 0;
}

//call by reference
#include<iostream>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	cout<<*a<<*b;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int &x=a;
	int &y=b;
	cout<<a<<b;
	swap(x,y);
	cout<<a<<b;
	return 0;
}


