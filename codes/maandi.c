#include<stdio.h>

int main()
{
    long long t,n,c,i,j,n1;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&n);
        for(i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                for(j=i;j>0;j=j/10)
                {
                    if((j%10==4)||(j%10==7))
                    {
                        c++;
                        break;

                    }
                }
            //}
            n1=n/i;
            if(n1!=i)
            {
                for(j=n1;j>0;j=j/10)
                {
                    if((j%10==4)||(j%10==7))
                    {
                        c++;
                        break;

                    }
                }
            }
        }

        }
        printf("%lld\n",c);
    }
}
