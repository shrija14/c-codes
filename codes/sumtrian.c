#include<stdio.h>

int main()
{

    long long int n,l,i,j,a[101][101]={0};
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&l);
        for(i=0;i<l;i++)
        {
            for(j=0;j<=i;j++)
            {
                scanf("%lld",&a[i][j]);

            }
        }
        for(i=l-2;i>=0;i--)
        {
            for(j=i;j>=0;j--)
            {
                if(a[i+1][j]>a[i+1][j+1])
                    a[i][j]=a[i][j]+a[i+1][j];
                else
                    a[i][j]=a[i][j]+a[i+1][j+1];

            }
        }
        printf("%lld\n",a[0][0]);

    }
    return 0;
}
