#include<stdio.h>
int main()
{
    int a[100],n,sum=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the values of array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("Sum of all elements : %d",sum);
}