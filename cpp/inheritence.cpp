//base            private           protetcted       public:           
//private:        Not inherited     Not inherited    Not inherited                                                       
//public:         private           protected        public                   
//protected:      private           protected        protected                                      
using namespace std;
#include<iostream>
class base
{
	int a,b;
	public:
		void get()
		{
		cin>>a>>b;
		}
	protected:
		void print()
		{
		cout<<a<<b;
		}
};
class deriverd:visibilitymode base
{
	int c;
	public:
		void get()
		{
		cin>>c;
		}
	protected:
		void print()
		{
		cout<<c;
		}
};
int main()
{	
	base  ob;
	derived ob1;
	ob.get();
	ob1.get()
	return 0;
}	
