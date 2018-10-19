#include<stdio.h>
int decimalToBinary(int n)
{
 if(n==0)
   return 0;
  
  return 10*decimalToBinary(n/2) +(n%2);
}
int main()
{
	int i;
	printf("Enter a number:\n");
	scanf("%d",&i);
	int ans=decimalToBinary(i);
	printf("%d",ans);
	return 0;
}

