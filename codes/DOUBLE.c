#include<stdio.h>

int main()
{

    long long int t,n;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%lld",&n);
        if(n%2==0)
            printf("%lld\n",n);
        else
            printf("%lld\n",n-1);
    }
    return 0;

}
