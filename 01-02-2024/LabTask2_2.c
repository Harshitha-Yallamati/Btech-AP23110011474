#include<stdio.h>
int main()
{
    int a[100],n,temp;
    printf("Enter the size of the Array : ");
    scanf("%d",&n);
    printf("Enter the values in array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("---Output---\n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
}