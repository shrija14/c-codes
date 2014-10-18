#include<stdio.h>

int main()
{
    int t,n,a[101],b[101]={0},i,c,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
            //printf("%d",b[a[i]]);
        }
        max=0;
        for(i=n;i>=1;i--)
        {
            if(b[i]>=max)
               {
                    max=b[i];
                    c=i;
               }
        }
        printf("%d %d\n",c,max);

    }
    return 0;
}
