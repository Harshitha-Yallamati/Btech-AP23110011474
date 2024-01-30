#include<stdio.h>
int main()
{
    int x,y,*p,*q;
    p=&x;
    q=&y;
    printf("Enter the values of x and y : \n");
    scanf("%d%d",&x,&y);
    int temp=*p;
    *p=*q;
    *q=temp;
    printf("After Swapping\n");
    printf("x=%d and y=%d",*p,*q);
}
