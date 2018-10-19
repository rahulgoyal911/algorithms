#include<stdio.h>
int main()
{
int n,a[100][100],k=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{	
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
int num;
if(n%2==0)
{
	num=n/2;
}
else
{
	num=(n+1)/2;
}

for(int loop=0;loop<num;loop++)
{
	for(int j=k;j<n;j++)
	{
	printf("%d\n",a[k][j]);
	}
	for(int i=k+1;i<n;i++)
	{
	printf("%d\n",a[i][n-1]);
	}
	for(int j=n-2;j>=k;j--)
	{
	printf("%d\n",a[n-1][j]);
	}
	for(int i=n-2;i>k;i--)
	{
	printf("%d\n",a[i][k]);
	}
	printf("\n\n");
	k++;
	n--;
}

return 0;
}

