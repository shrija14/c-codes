a2 d8 b6 b4#include<stdio.h>
int y[100005];
char x[100005];

int main()
{
    int t,n,m,i,s,d=0;
    long int M=1000000000+7;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++)
        {
            scanf("%s %d",&x[i],&y[i]);
        }
        s=1;
        for(i=1;i<m;i++)
        {
            if(x[i]!=x[i+1])
            {
                d=y[i+1]-y[i];
                s=(s*d)%M;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
