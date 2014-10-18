//ef submission 4803086 (C) plaintext list. Status: WA, problem FLOORI4, contest SEPT14. By incognito_14 (incognito_14), 2014-09-12 09:34:46.
#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,t,m,c,i,s=0;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);

        for(i=1;i<=n;i++)
        {
            c=(((int)(pow(i,4)))*(n/i))%m;
            s=s+c;
        }
        printf("%lld\n",s);
    }
    return 0;
}
