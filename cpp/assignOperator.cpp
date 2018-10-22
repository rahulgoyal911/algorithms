//overload assignment operator
#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	//istream overloading
	friend istream& operator>>(istream &in, complex &ob)
	{
	in>>ob.r;
	in>>ob.i;
	return in;	
	}
	//ostream overloading
	friend ostream& operator<<(ostream &out, complex &ob)
	{
	out<<ob.r<<endl;
	out<<ob.i;
	return out;	
	}
	void operator=(complex &c)
	{
	r=c.r+1;
	i=c.i+1;
	}
};
int main()
{
	complex c,c1;
	cin>>c;
	c1=c;
	cout<<c1;
	return 0;
}
