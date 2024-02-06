#include<stdio.h>
int main()
{
    int a[100],n,x,p,temp;
    printf("Enter the size of an array  : ");
    scanf("%d",&n);
    printf("Enter the values in the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Position to insert an element : ");
    scanf("%d",&x);
    printf("Enter the element to bwe inserted : ");
    scanf("%d",&p);
    n++;
    for (int i = n - 1; i > x; i--) 
    {
        a[i] = a[i - 1];
    }
    a[x]=p;
    printf("After inserting : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    } 
}