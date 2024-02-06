#include<stdio.h>
int main()
{
    int a[100],n,temp;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the values of array :\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Unique elements : \n");
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=0,k=n;j<k+1;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    temp++;
                }
            }
        }
        if(temp==0)
        {
            printf("%d, ",a[i]);
        }
    }
}