#include<stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#define ll long long
#define lli long long int
#define pf printf
#define sf scanf
#define nl printf("\n")
#define pfx printf("x")
#define M 1000000007
#define N 1000000005
lli pw(lli x, lli y)
{
    lli z;
    if(y==0)
    return 1;
    z=pw(x,y/2);
    z=(z*z)%M;
    if(y%2==0)
    return z;
    return (z*x)%M;
}
int main()
{
    lli n,i,k,s;
    scanf("%lld",&n);
    if(n>12)
    {
        if(n%2==0)
        n-=2;
        else
        n--;
        n/=2;
        n--;
        s=1;k=1;
        for(i=6;i<=n;i++)
        {
            k*=i;
            k%=M;
            k*=pw(i-5,N);
            k%=M;
            s+=k;
            s%=M;
        }
        pf("%lld",s);
    }
    else
    pf("0");
    return 0;
}
