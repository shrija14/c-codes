#include<stdio.h>
#include<stdlib.h>


int main()
{
    long long t,r,g,b,m,i,j,big,k,c;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&r,&g,&b,&m);
        long long R[r],G[g],B[b];
        for(i=1;i<=r;i++)
        {
            scanf("%lld",&R[i]);
        }
        for(i=1;i<=g;i++)
        {
            scanf("%lld",&G[i]);
        }
        for(i=1;i<=b;i++)
        {
            scanf("%lld",&B[i]);
        }

        while(m--)
        {
            big=0;
            for(i=1;i<=r;i++)
                if(R[i]>big)
                    big=R[i];
            for(i=1;i<=g;i++)
                if(G[i]>big)
                    big=G[i];
            for(i=1;i<=b;i++)
                if(B[i]>big)
                    big=B[i];

            for(i=1;i<=r;i++)
            {
                if(R[i]==big)
                {
                   R[i]=R[i]/2;
                   break;
                }
            }
            for(i=1;i<=g;i++)
            {
                if(G[i]==big)
                {

                        G[i]=G[i]/2;
                    break;
                }
            }
            for(i=1;i<=b;i++)
            {
                if(B[i]==big)
                {

                        B[i]=B[i]/2;
                    break;
                }
            }

        }
        /* big=0;
            for(i=1;i<=r||i<=g||i<=b;i++)
            {
                if(R[i]>big)
                    big=R[i];
                if(G[i]>big)
                    big=G[i];
                if(B[i]>big)
                    big=B[i];
            }*/
             big=0;
            for(i=1;i<=r;i++)
                if(R[i]>big)
                    big=R[i];
            for(i=1;i<=g;i++)
                if(G[i]>big)
                    big=G[i];
            for(i=1;i<=b;i++)
                if(B[i]>big)
                    big=B[i];

            printf("%lld\n",big);
    }
    return 0;
}
