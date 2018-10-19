//friendclass by rishav
#include<iostream>
using namespace std;
class integer;
class Complex
{
    int a,i;
public:
    Complex()
    {
        cout << "Enter complex no _ + _i"<<endl;
        cin >> a >> i;
    }
    void display()
    {
        cout << a << "+ i" << i << endl;
    }
    void addition(integer y)
    {
    a = a + y.n;
    i = i + y.n;
    }
};
class integer
{
    int n;
public:
    integer()
    {
        cout << "Enter the Integer number:" << endl;
        cin >> n;
    }
    void display()
    {
        cout << n;
    }
    friend class Complex;
};
int main()
{
    Complex obj;
    integer obj1;
    obj.addition(obj1);
    obj.display();
    return 0;
}
