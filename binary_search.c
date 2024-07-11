// Write a C program and algorithm that uses a recursive binary search technique to find specific data inside an array

#include <stdio.h>

int binarySearch(int a[], int l, int h, int x)
{
	if (h >= l) 
	{
		int mid = (l+h)/ 2;
		if (a[mid] == x)
			return mid;

		if (a[mid] > x)
			return binarySearch(a, l, mid - 1, x);

		return binarySearch(a, mid + 1, h, x);
	}

	return -1;
}

int main()
{
	int a[10],size,i,val;
	printf("Enter the size of array-");
    scanf("%d",&size);
   
    if(size>10)
    {
        printf("Array overflows");
    }
    else
    {
        printf("The the size of array-%d",size);
        printf("\nEnter the elements of the array in sorted order-");
        for(i=0; i<size; i++)
        {
            scanf("%d",&a[i]);
        }
   
        printf("\nThe elements of the array\n");
        for(i=0;i<size;i++)
        {
            printf("[%d]",a[i]);
        }
   
        printf("\nEnter the value you want to search:");
        scanf("%d",&val);
        
    	int result = binarySearch(a, 0, size - 1, val);
    	if(result == -1)
    		printf("\nElement is not present in array");
    	else
    	{
    		printf("Element is present at index %d", result);
    		printf("\nElement is present at position %d", result+1);
    	}
    }
    return 0;
}
