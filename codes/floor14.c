#include<stdio.h>


int main()
{

    long long int t,n,m,s=0,i,d,p,j;
    scanf("%lld",&t);
    while(t--)
    {
        s=0;
        scanf("%lld %lld",&n,&m);

        for(i=1;i<=n;i++)
        {
            p=1;
            d=n/i;
            for(j=1;j<=4;j++)
            {
                p=(p*i)%m;
            }

            s=((s+p*(d%m))%m);
            //s=(s%m)+((int)(pow(i,4))%m)*((n/i)%m);
        }
        //s1=s%m;
        printf("%lld\n",s);

    }
    return 0;
}
