#include<stdio.h>

int add(int x,int y) 
{
	return (x+y);
}

int sub(int x,int y) 
{
	return (x-y);
}

int mul(int x,int y) 
{
	return (x*y);
}

int div(int x,int y) 
{
	return (x/y);
}

void print(int x, int y, int (*func)(int,int)) 
{    // function pointer as argument
	printf(" value is : %d\n", ((*func)(x,y)));        // calling function pointer with arguments.
}

int main() 
{
  int x=100, y=20;
  printf("x=%d , y=%d \n",x,y);
  printf("Addition Result");
  print(x,y,add);
  printf("\nSubtraction Result");
  print(x,y,sub);
  printf("\nMultiply Result");
  print(x,y,mul);
  printf("\nDivision Result");
  print(x,y,div);
  return 0;
}

