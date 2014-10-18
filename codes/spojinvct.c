#include<stdio.h>
long long int a[200005];

int main()
{
    long long int n,i,j,t,c;
    scanf("%lld ",&t);
    while(t--)
    {
        c=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        printf("\n");
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                    c++;
            }
        }
        printf("%lld\n",c);
    }
    return 0;

}
