#include<stdio.h>
void bubble_sorting(int a[],int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
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
	
		bubble_sorting(a,size);
		printf("\n The elements of the array \n");
		for(i=0;i<size;i++)
		{
			printf("[%d]",a[i]);
		}
	
	}
    return 0;
	}