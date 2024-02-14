#include<stdio.h>
int main()
{
	int a[100],n,x,p,q,r;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("Enter the elements of the array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search : ");
	scanf("%d",&x);
	a = 0;
	c = n - 1;
	
	while (a <= c) 
	{
		b = (a+c)/2;
	    if (arr[b] < x)
		{
			a = b + 1;
		}
		else if (arr[b] == x) 
        {
            printf("%d found at location %d.\n", x, b+1);
            return 0;
        }
        else
        {
        	c = b - 1;
        	b = (a + c)/2;
		}
    }
	if (a > c)
	    printf("Not found! %d isn't present in the list.\n", x);
	return 0;
}
