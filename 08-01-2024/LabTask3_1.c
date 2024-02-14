#include<stdio.h>
int main()
{
	int a[100],n,x,i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the values of the array : \n");
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	printf("Enter the value to search : ");	
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			printf("Element found at index %d",i);
			break;
		}
	}
    if(i==n)
    { 
        printf("element not found");
    }
}
