#include<stdio.h>
int main()
{
    int t;
    long int n,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        if(n%2==0)
        {
            r=n/2+1;
            printf("%ld\n",r);
        }
        else
        {
          r=n/2;
          printf("%ld\n",n-r);
        }

    }
    return 0;
}
