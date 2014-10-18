#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,i,j,k,s,d[100005],m,v[100005],dino[100005],diff,carry;
    scanf("%d",&t);
    while(t--)
    {
        j=0;k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&d[i]);
            if(d[i]>0)
            {
                v[j]=i;
                j++;
            }
            if(d[i]<0)
            {
                dino[k]=i;
                k++;
            }
        }
        m=0,s=0,carry=0;
        for(i=0;i<k;i++)
        {
            carry=d[dino[i]];
            for(;m<j;m++)
            {
                diff=-d[dino[i]]-d[v[m]];
                if(diff>=0)
                {
                    //s=s+fabs(dino[i]-v[m])*d[v[m]]+fabs(dino[i]-v[m])*carry;
                    s=s+fabs(dino[i]-v[m])*carry;
                    carry=diff;
                    continue;
                    //d[dino[i+1]]+=diff;

                }
                if(diff<0)
                {
                  s=s+fabs(dino[i]-v[m])*d[dino[i]];
                  break;

                }

            }
        }
        printf("%d\n",-s);


    }
    return 0;
}
