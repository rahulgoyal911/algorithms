//string
#include<string.h>
#include<cstring>
using namespace std;
#include<iostream>
int main()
{
char str[100];
cin.getline(str,50);
cout<<str<<endl;
int a=strlen(str);
cout<<a<<endl;
string strr;
getline(cin,strr);
cout<<strr<<endl;
int b=strr.length();
cout<<b<<endl;

}

