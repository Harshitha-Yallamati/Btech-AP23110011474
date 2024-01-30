#include<stdio.h>
#include<string.h>
int main(){
    char a[100],*ptr,j,temp;
    ptr=a;
    printf("Enter String : \n");
    scanf("%s",&a);
    int l=strlen(a);
    printf("Reverse of the string is ");
    for(int i=0;i<l/2;i++)
    {
        temp=a[l-i-1];
        a[l-i-1]=a[i];
        a[i]=temp;
    }
    printf("%s\n",a);
}
