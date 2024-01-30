/*#include<stdio.h>
void powerofnum(int *b,int *p,int *ans);
int main()
{
    int x,y,*base,*power,*result;
    base=&x;
    power=&y;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&y);
    powerofnum(&x,&y,&result);
    printf("%d to the power of %d is %d",x,y,result);
}
void powerofnum(int *b,int *p,int *ans)
{
    *ans=1;
    for(int i=1;i<=*p;i++)
    {
        *ans=(*ans)*(*b);
    }
}

*/

#include<stdio.h>
void power(int,int,int *);
int main()
{
    int x,y,result;
    printf("Enter base : ");
    scanf("%d",&x);
    printf("Enter power : ");
    scanf("%d",&y);

    void (*power_num)(int,int,int *)=&power;

    (*power_num)(x,y,&result);
    printf("%d to the power of %d is %d",x,y,result);
}
void power(int b,int p,int *ans)
{
    *ans=1;
    for(int i=1;i<=p;i++)
    {
        *ans=(*ans)*b;
    }
}
