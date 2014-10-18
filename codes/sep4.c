#include<stdio.h>
#include<math.h>

int main()
{
    long int n,t,m,c,i,s=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);

        for(i=1;i<=n;i++)
        {
            c=((int)(pow(i,4)))*(n/i);
            s=(s+c)%m;
        }
        printf("%d\n",s);
    }
    return 0;
}
