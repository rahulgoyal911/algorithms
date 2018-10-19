#include<iostream>
#include<cstring>
using namespace std;
class string1
{
    char *name;
    int len;
public:
    string1()
    {
        len=0;
        name=new char[1];//single byte memory is allocated for null character
    }
    string1(char *s)
    {
        len=strlen(s);
        name=new char[len+1];
        strcpy(name,s);
    }
    void join(string1 &a,string1 &b)
    {
        len =a.len+b.len;
        delete name;//1 byte memory is allocated so, it has to be freed for reallocation.
        name=new char[len+1];
        strcpy(name,a.name);
        strcat(name,b.name);
    }
    void put()
    {
        cout<<name;
    }

};
int main()
{

    char *h=(char*)"hello";//typecasting is necessary char* is different from string
    string1 a(h);
    string1 b((char*)"Bye");
    string1 c;
    c.join(a,b);
    c.put();
}
