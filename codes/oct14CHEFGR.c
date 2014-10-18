#include<stdio.h>

int main()
{
    int t,n,m,a[105],big,s,i,d;
    scanf("%d",&t);
    while(t--)
    {
        big=0,s=0;
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
           if(a[i]>big)
           big=a[i];
        }
        for(i=0;i<n;i++)
        {
            d=big-a[i];
            s=s+d;
        }
        if(s!=0&&m!=0)
        {
            if(m%s==0)
                printf("Yes\n");
            else printf("No\n");
        }
        else if(s==0&&m!=0)
        {
            if(m%n==0)
                printf("Yes\n");
            else printf("No\n");
        }
        else if(s==0&&m==0)
        {
            printf("Yes\n");
        }
        else if(s!=0&&m==0)
        {
            printf("No\n");
        }

    }
    return 0;
}
