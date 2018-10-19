//overload shift operator
#include<iostream>
using namespace std;
class complex
{
	int r,i;
	public:
	friend istream& operator>>(istream &in, complex &ob)
	{
	in>>ob.r;
	in>>ob.i;
	return in;	
	}
	friend ostream& operator<<(ostream &out, complex &ob)
	{
	out<<ob.r<<endl;
	out<<ob.i;
	return out;	
	}
};
int main()
{
	complex c;
	cin>>c;
	cout<<c;
}
