using namespace std;
#include<iostream>
class matrix
{
int **a,sum;
public:
	matrix()
	{
		sum=0;
		a=new int*[3];
		for(int i=0;i<3;i++)
		{
			a[i]=new int[3];	
		}
	}
	matrix(int x)
	{
	a=new int*[3];
		for(int i=0;i<3;i++)
		{
			a[i]=new int[3];	
		}
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
				a[i][j]=x;
			}
		}
	
	}
	friend istream& operator>>(istream &in,matrix &ob)
		{
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
				in>>ob.a[i][j];
				}
			}
			return in;	
		}
	friend ostream& operator<<(ostream &out, matrix &ob)
	{
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
			out<<ob.a[i][j]<<" ";
			}
			out<<endl;
		}
		return out;
	}
	}
	
	operator int()
	{
		for(int i=0;i<3;i++)
		{
		for(int j=0;j<3;j++)
			{
			sum+=a[i][j];
			}}
		return sum;
	}
	};
int main()
{
matrix m;
cin>>m;
int sum=m;
cout<<sum;
int count;
cin>>count;
m=count;
cout<<m;
return 0;
}

