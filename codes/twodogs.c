#include<stdio.h>

int main()
{
    int t,n,min=1000000,flag=0,t1,k,i,j,a[500005];
    scanf("%d",&t);


        scanf("%d",&n);
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<t;i++)
        {
            for(j=i+1;j<t;j++)
            {
                if(a[i]+a[j]==n)
                {
                    t1=i+1;
                    k=j;

                    if(j>n/2)
                        k=n-j;
                        if(k>t1)
                            t1=k;

                    flag=1;
                }

                if((t1)<min)
                    min=t1;
            }
        }
        if(flag==1)
            printf("%d\n",min);
        else printf("-1");

        return 0;

}
