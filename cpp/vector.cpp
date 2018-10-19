//stl
//container- to store data
//vector,lists,sets
//iterator-type of pointer===to visit every element of vector
//algorithms-functions


//vector(dynamic array)
//methods to declare objects
//vector<int> v;
//vector<int> v={1,2,3,4,5}
//vector<int> v(4,100);//all four values are 100
//vector<int> v1(v) or v1=v;//copy
//int a[]={1,2,3,4,5};
//vector<int> v(a,a+5);//excluding a+5
//vector<int> v(5);//contains 5 elements uninitialised

/*
using namespace std;
#include<vector>
#include<iostream>
#include<algorithm>
main()
{
vector<int> v={1,2,3,4,5};
for(int i=0;i<5;i++)
cout<<v[i]<<" "<<v.at(i)<<endl;
cout<<endl;
vector<int>::iterator it;
for(it=v.begin();it!=v.end();it++)
cout<<*it;
//to print in reverse
vector<int>::reverse_iterator it1;
for(it1=v.rbegin();it1!=v.rend();it1++)
cout<<*it1;
cout<<endl;

}
*/
/*
//member functions
size();
at()
push_back();
pop_back();
clear();
empty(); to check
swap();
front();
back();
v.erase(v.begin()+1);//to delete second element
v.erase(v.begin()+1,v.begin()+3);
v.insert(v.begin(),999);
v.insert(v.begin()+1,5,20); // add 20,5 times
*/


//Algorithm
/*
it = find(v.begin(),v.end(),value);
distance or direction
reverse(v.begin(),v.end());
sort
swap(v,v1);
min_element();
max_element();
rotate(v.begin(),v.begin()+1,v.end());


*/







