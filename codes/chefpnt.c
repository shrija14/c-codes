#include<stdio.h>
long long int b[10005],c[10005],a[105][105]={0};

int main()
{
    long long int i,j,x, n,m,k,flag,count;
    scanf("%lld %lld %lld",&n,&m,&k);
    while(k--)
    {
        scanf("%lld %lld",&i,&j);
        a[i][j]=1;
    }
    x=0,flag=0,count=0;
    for(i=1;i<=n;i++)
    {
        flag=0;
        for(j=1;j<=m;j++)
        {
            if((j==1)&&(a[i][j]!=1))
            {
                b[x]=i;
                c[x]=j;
                x++;
                count++;

            }
            if(a[i][j]==1)
                flag=1;
            if((a[i][j]==0)&&(j<=m)&&(flag==1))
            {
                b[x]=i;
                c[x]=j;
                x++;
                count++;
                flag=0;
            }

        }
    }
    printf("%lld\n",count);
    for(i=0;i<x;i++)
    {
        printf("%lld %lld %s\n",b[i],c[i],"0");
    }
    return 0;

}
