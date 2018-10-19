//concat 2 strings using dynamic constructor
using namespace std;
#include<iostream>

#include<string.h>
class string1
{
	int len;
	char *name;
	public:
		string1()
		{
		len=0;
		name= new char;
		}
		string1(char *s)
		{
		len=strlen(s);
		name=new char[len+1];
		strcpy(name,s);
		}
		void join(string1 &a,string1 &b)
		{
			len=a.len+b.len;
			delete name;
			name = new char[len+1];
			strcpy(name,a.name);
			strcat(name,b.name);
		}
		void put()
		{
		cout<<name;
		}
		~string1()
		{
		delete name;
		}
};
int main()
{

	//we have to do typecasting here
	char *h=((char *)"hello");
	string1 a(h);
	string1 b((char *)"bye");
	string1 c;
	c.join(a,b);
	c.put();
}

