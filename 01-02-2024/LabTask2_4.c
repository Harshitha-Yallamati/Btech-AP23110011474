#include<stdio.h>
int main()
{
    int a[100],n,temp=0;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the values of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                temp++;
                break;
            }
        }
    }
    printf("No.of duplicate elements : %d",temp);
}