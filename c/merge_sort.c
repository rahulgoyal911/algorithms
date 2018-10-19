#include <stdio.h>
#include <stdlib.h>

void merge(int arr[], int low, int mid, int high)
{
	int size1 = mid - low + 1;
	int size2 = high - mid;
	int left[size1], right[size2];
	int q = 0, i, w = 0;

	for (i = 0; i < size1; i++) {
		left[i] = arr[low + i];
	}

	for (i = 0; i < size2; i++) {
		right[i] = arr[mid + i + 1];
	}

	int e = 0, r = 0, l = low;

	while (e < size1 && r < size2) {
		if (left[e] <= right[r]) {
			arr[l] = left[e];
			e++;
			l++;
		}
		else {
			arr[l] = right[r];
			r++;
			l++;
		}
	}

	while (e < size1) {
		arr[l] = left[e];
		e++;
		l++;
	}
	while (r < size2) {
		arr[l] = right[r];
		l++;
		r++;
	}
}

void split(int arr[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
        // splitting arr in half
		split(arr, low, mid);
		split(arr, mid + 1, high);
		// merging two arrays
		merge(arr, low, mid, high);
	}
}

int main()
{
int size;
	printf("Enter the size of the array :\n");
	scanf("%d",&size); 
	int arr[size];
	int i;
	printf("Enter %d elements :\n",size);
	for( i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}

	printf("Before sorting : \n");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	// split function to split the array in half
	split(arr, 0, size - 1);

	printf("\nAfter sorting : \n");

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}
