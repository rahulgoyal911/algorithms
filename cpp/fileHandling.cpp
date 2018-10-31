using namespace std;
#include<iostream>
#include<fstream>
#include<cstring>
//ifstream--reading
//ofstream--writing
//fstream--both


/*
methods to open
1.
open function
ifstream ifile;
ifile.open("sample.txt")
2.
//constructor
ifstream ifile("sample.txt")


ios::app->append
ios::in->rreading
ios::out->writing
ios::ate->put cursor at last
ios::nocreate->open fails if file dont exist
ios::noreplaace->open fails if file exist
ios::trunc->same as out

ifstream("Sample.txt",ios::nocreate)|ios::app)
*/
int main()
{
	ofstream ofile;
	ofile.open("Sample.txt");
	string str;
	int roll,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	cin>>str;
	ofile<<str<<endl;
	cin>>roll;
	ofile<<roll;
	}
	ofile.close();
}
