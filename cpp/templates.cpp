using namespace std;
#include<iostream>
/*template<class T1,class T2>
void add(T1 a,T2 b)
{
//T1 c;
cout<<a<<b<<endl;
//cout<<c;
}
void add(float a,char b){
cout<<a<<b<<"Overloaded"<<endl;
}
int main()
{
//char a='a';
add(4,1.1);
add(6.1f,'a');
}
*/
//class templates
/*
template<class T>
class abc{
 T a,b;
 public:
 abc(){
 cin>>a>>b;
 }
 void print(){
 cout<<a<<b<<endl;
 }
};
int main()
{
abc <int> a;
abc <float> b;
a.print();
b.print();
return 0;
}
*/
//combination of 2 datatypes
/*
template<class T1,class T2>
class abc{
 T1 a;
 T2 b;
 public:
 abc(){
 cin>>a>>b;
 }
 void print(){
 cout<<a<<b<<endl;
 }
};
int main()
{
abc <int,float> a;
abc <float,float> b;
a.print();
b.print();
return 0;
}
*/
//member function templates
/*
template<class T1,class T2>
class abc{
 T1 a;
 T2 b;
 public:
 abc(){
 cin>>a>>b;
 }
 void print();
};
template<class T1,class T2>
void abc<T1,T2>::print()
{
cout<<a<<b<<endl;
}
int main()
{
abc <int,float> a;
abc <float,float> b;
a.print();
b.print();
return 0;
}
*/
//#template and static variables
template<class T1>
class abc{
 T1 a;
 public:
 abc(){
 cin>>a;
 }
 void print();
};
template<class T1>
void abc<T1>::print()
{
static int c=0;
cout<<c<<a<<endl;
}
int abc<T1>::c;
int main()
{
abc <int> a;
abc <float> b;
a.print();
b.print();
return 0;
}
