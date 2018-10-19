//stringstream
#include<string.h>
#include<cstring>
#include<sstream>
using namespace std;
#include<iostream>
string fun()
{
int age=18;
stringstream g;
char name[]="rahul";
string str1;
g<<age;
string x1=g.str();
g.str("");
g<<name;
string x2=g.str();
g.str("");
string s= x2 + "is "+x1+"Years old";
return s;

}
int main()
{
string stt= fun();
cout<<stt;
}

