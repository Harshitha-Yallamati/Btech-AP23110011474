#include<stdio.h>
int main()
{
    int *p;
    int a[100],n,sum=0;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    printf("Enter the values of array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    p=a;
    for(int i=0;i<n;i++)
    { 
        sum+=*p;
        p++;
    }
    int *ptr; 
    ptr=&sum; 
    printf("Sum of %d elements of array: %d",n, *ptr);
    return 0;
}
