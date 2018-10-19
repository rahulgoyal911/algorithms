#include<stdio.h>
int main()
{
      int size;
      printf("Enter the size : \n");
      scanf("%d",&size);
      
	  int i;
      int arr[size];
      printf("Enter  %d elements : \n",size);
      for(i=0; i<size; i++) {
      	scanf("%d",&arr[i]);
	  }
	 
	 int j,swap;

	 for( i=0; i<size-1; i++ ) {
	     for( j=i+1; j<size; j++ )	{
			if( arr[j] < arr[i] ) {
			   swap=arr[j];
			   arr[j]=arr[i];
			   arr[i]=swap;	
			}
	    }
	 }

	printf("After sorting :\n");

	  for(i=0;i<size;i++) {
	       printf("%d  ",arr[i]);
	   }
	return 0;
}
