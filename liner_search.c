#include<stdio.h>
int main()
{
	int a[10],size,i,val,pos;
	printf("Enter The number of element of array-");
	scanf("%d",&size);
	
	if(size>10)
	{
		printf("Array over flows");
	}
	else{
		printf("The number of element of array-%d",size);
		printf("\n Enter The Element of array:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&a[i]);
		}
		
		printf("\n Enter the element of the arrry\n");
		for(i=0;i<size;i++)
		{
			printf("[%d]\t",a[i]); 
		}
		
		printf("\n Enter The value you want to search::");
		scanf("%d",&val);
		
	    for(i=0;i<size;i++)
		{
			if(a[i]==val)
		
		    {
			printf("Element found at index:-	%d",i);
			printf("\n element found at position:-	%d",i+1);
			break;
		    }
        }
			if(i==size)
			{
				printf("Element not found in array");
			}	
	  
	}
	
	
	return 0;
}