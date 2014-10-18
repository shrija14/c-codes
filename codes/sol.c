#include <stdio.h>

int main()
{
    long long t,n,m,a,i,s,e,P,N,M;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        a=0;
        i=1;
        P=0;
        M=m*30;
        while(i<=n)
        {
            s=n/i;
            e=n/s;
            i=e+1;
            N=((e*((e*((e*((e*((6*e+15)%M)+10)%M))%M)-1)%M))%M)/30;
            a=(a+(s%m)*(N+m-P))%m;
            P=N;
        }
        printf("%lld\n",a);
    }
    return 0;
}
