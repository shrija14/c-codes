#include<stdio.h>
#include<math.h>

int main()
{

    long long int t,n,m,s=0,s1,i;
    scanf("%lld",&t);
    while(t--)
    {
        s=0;
        scanf("%lld %lld",&n,&m);

        for(i=1;i<=n;i++)
        {
            s=s+(int)(pow(i,4))*(n/i);
        }
        s1=s%m;
        printf("%lld\n",s1);

    }
    return 0;
}

