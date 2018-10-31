using namespace std;
#include<iostream>
#include<fstream>
#include<cstring>
int main()
{
ofstream ofile;
ofile.open("Sample1.txt");
ifstream ifile;
ifile.open("Sample.txt");
char ch;
while((ch=ifile.get())!=EOF)
{
ofile.put(ch);
}
cout<<"Completed";
ifile.close();
ofile.close();
}
