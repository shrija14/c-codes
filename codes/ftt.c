#include<stdio.h>
char x[2],paint[100005]={'\0'};
long long int y[100005];

int main()
{
    long long int t,n,m,s,d,j,i,M=1000000009,counter;
    char c;

    scanf("%lld",&t);
    while(t--)
    {
        char paint[100005]={'\0'};
        scanf("%lld %lld",&n,&m);
        for(i=1;i<=m;i++)
        {
            scanf("%s %lld",x[0],&y[i]);
            paint[y[i]]=x[0];
        }
        s=1,counter=0;


        for(i=1;i<=n;i++)
        {
            if(paint[i]!='\0')
            {
                c=paint[i];
                for(j=i+1;j<=n;j++)
                {
                    if((paint[j]=='\0')&&paint[j]!=c)
                    {
                        counter=(counter+1)%M;
                    }
                    s=(s*c)%M;

                   /* if(paint[j]!=c)
                    {
                        d=j-i;
                        s=(s*d)%M;

                        break;
                    }*/
                    //else break;
                }

            }


        }
        printf("%lld\n",s);
    }
    return 0;
}

