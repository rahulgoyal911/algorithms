//stack and queue
using namespace std;
#include<iostream>
#include<stack>
#include<queue>
int main()
{
	stack<int> s;
	queue<int> q;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(7);
	cout<<s.size()<<endl;
	cout<<s.top()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
	
	
	
	
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(7);
	cout<<q.size()<<endl;
	cout<<q.front()<<" "<<q.back()<<endl;
	q.pop();
	cout<<q.front()<<" "<<q.back()<<endl;
	cout<<q.size()<<endl;
	
	
	return 0;
}
	
