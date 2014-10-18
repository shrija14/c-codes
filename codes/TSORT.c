#include<stdio.h>

int main()
{

    long int t,a[1000001],b[1000001]={0},i,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);

    }

    for(i=0;i<t;i++)
    {
        n=a[i];
        b[n]=1;;
    }
    for(i=0;i<1000001;i++)
    {
        if(b[i]==1)
            printf("%d\n",i);
    }
    return 0;
}

