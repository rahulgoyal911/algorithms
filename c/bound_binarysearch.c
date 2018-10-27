//binary search
#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array :\n");
	scanf("%d",&size); 
	int arr[size];
	int i;
	printf("Enter %d elements :\n",size);
	for( i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}
	int num;
	printf("Enter the number :\n");
	scanf("%d",&num);
	int left=0,right=size,mid;
	
	// Lower bound 
	while(left<right)
	{
		mid=(left+right)/2;
	    if(num>arr[mid]) {
			left=mid+1;
		}
		else {
             right=mid;  			
		}
	}
	printf("lower bound = %d \n",right);
	
	// Upper bound 
	left=0,right=size;
	while(left<right)
	{
		mid=(left+right)/2;
		if(num<arr[mid]) {
			right=mid;
		}
		else {
			left=mid+1;
		}
	}
	printf("upper bound = %d \n",right);
    return 0;	
}
