#include<stdio.h>

int main()
{
    int t,i,n,p,j,a[10000],c=0,r,k;

    scanf("%d",t);
    for(i=0;i<t;i++)
    {

        scanf("\n%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {

        n,p=a[i];
        while(n>0)
        {
            c++;
            r=n%10;n=n/10;
            if(r)
                continue;
            else
            {
                for(j=0;j<10;j++)
                {
                    r=j;
                    for(k=2;k<p;k++)
                    {
                        if(p%k==0)
                            break;
                    }
                    printf("%d",r);
                }
            }

        }
    }
}
