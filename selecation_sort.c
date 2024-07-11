#include <stdio.h>
 void selection_sorting(int a[],int size )
 {
 	int i,j,min,temp;
 	for(i=0;i<size-1;i++)
 	{       min=i;
 			for(j=i+1;j<size;j++)
 			{
 				if (a[j]<a[min])
 				{
 					min =j;
				}
 			}
 			if (min !=i)
			 	{
					temp=a[min];
 					a[min]=a[i];
 					a[i]=temp;
				}
			
	 }
 }
int main()
{
    	int a[10],size,i;
	printf("Enter the number of elements of array : ");
	scanf("%d",&size);
	if(size>10)
	{
		printf("Array overflow");
	}
	else
	{
		printf("The number of elements of array %d",size);
		printf("\n Enter the elements of the array : ");
		for(i=0;i<size;i++)
			{
				scanf("%d",&a[i]);
			}
		printf("\n The elements of the array \n");
		for(i=0;i<size;i++)
			{
				printf("[%d]",a[i]);
			}
        selection_sorting(a,size);
        printf("\nThe elements of the array\n");
        for(i=0;i<size;i++)
        {
            printf("[%d]",a[i]);
        }
    
    }
    return 0;
}