#include<stdio.h>
int main()
{
    int a[100],n,x;
    printf("Enter the size of an array  : ");
    scanf("%d",&n);
    printf("Enter the values in the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Position to delete an element : ");
    scanf("%d",&x);
    n++;
     for (int i = x; i < n - 1; i++) 
     {
        a[i] = a[i + 1];
    }
    n-=2;
    printf("After Deleting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    } 
}