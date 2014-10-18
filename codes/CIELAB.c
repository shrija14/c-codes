#include<stdio.h>

int main()
{
    int a,b,d;
    scanf("%d",&a);
    scanf("%d",&b);
    d=a-b;
    if(d%10==9)
        d=d-1;
    else d=d+1;
    printf("%d",d);
    return 0;
}
