#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,r,c,*row,*col;
    row=&r;
    col=&c;
    printf("Enter number of ROWS in array : ");
    scanf("%d",&r);
    printf("Enter number of COLUMNS in array :");
    scanf("%d",&c);
    ptr=(int*)malloc(r*c*sizeof(int));
    for(int i=0;i<(*row);i++)
    {
        for(int j=0;j<(*col);j++)
        {
            scanf("%d",&ptr[i*(*col)+j]);
        }
    }
    for(int i=0;i<(*row);i++)
    {
        for(int j=0;j<(*col);j++)
        {
            printf("%d ",ptr[i*(*col)+j]);
        }
        printf("\n");
    }
}