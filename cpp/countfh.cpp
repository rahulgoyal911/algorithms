using namespace std;
#include<iostream>
#include<istream>
#include<fstream>
#include<cstring>
int main()
{
string str;
char ch;
int spaces=0;int lines=0;
ifstream ifile;
ofstream ofile;
ofile.open("Sample1.txt");
ifile.open("Sample.txt");
int roll;
while((ch=ifile.get())!=EOF)
{
ifile>>str;
if(ch==' ')
spaces++;
else if(ch=='\n')
lines++;
}
ofile<<spaces<<endl<<lines;
}

