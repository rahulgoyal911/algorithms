//friendclass by karam
#include <iostream>
using namespace std;
class B;
class A
class B
      {
            int o,n,qq;
        public:
         void input(A &a1)
            {
                cin>>o>>n;
                a1.r=n;
                a1.m=o;
            }
            void add(A &m1)
            {
                m1.q=m1.r+m1.m;
            }
};
{
	int r,m,q;
public:
    void print()
    {
        cout<<q;
    }
    friend class B;
};

int main()
{
    A c;
    B b1;
    b1.input(c);
    b1.add(c);
    c.print();
    return 0;
}
