#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any number");
    scanf("%d%d",&a,&b);
    b=a%2;
    if(b==0)
    {
        printf("%d is odd");
    }
    else
    {
        printf("%d is even");
    }
    return 0;
}