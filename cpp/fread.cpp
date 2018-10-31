using namespace std;
#include<iostream>
#include<istream>
#include<fstream>
#include<cstring>
int main()
{
string str;
ifstream ifile;
ifile.open("Sample.txt");
int roll;
for(int i=0;i<5;i++)
{
ifile>>str;
cout<<str<<" ";
ifile>>roll;
cout<<roll<<" ";
}
ifile.close();
}

