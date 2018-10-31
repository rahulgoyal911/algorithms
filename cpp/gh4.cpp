//line by line
using namespace std;
#include<fstream>
int main()
{
ofstream ofile;
ofile.open("Sample.txt1");
ifstream ifile;
ifile.open("Sample.txt");
string str;
getline(ifile,str);
while(!ifile.eof()){
ofile<<str<<endl;
getline(ifile,str);
}}
