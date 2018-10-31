#include <iostream>
#include<map>
#include<vector>
using namespace std;

int main()
{
    map<string,vector<string>>obj;
    int n,flag=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string n1,n2;
        cin >> n1 >> n2;
       vector<string> s;
       // s.push_back(n2);
       auto it = obj.find(n1);
       if(it!=obj.end())
       {
           (it->second).push_back(n2);
       }
       else
       {
           s.push_back(n2);
           obj.insert(pair<string,vector<string>>(n1,s));
       }
    }
    cout<<"enter cate";
    string n1;
    cin >> n1;

   // for(int i=0;i<obj.size();i++)
   // {
        auto it = obj.find(n1);
        if(it!=obj.end())
        {
            vector<string> ob = it->second;
            for(int i=0;i<ob.size();i++)
            {
                cout << ob[i]<< " ";
            }
        }
   // }
    return 0;
}
