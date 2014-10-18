#include<stdio.h>
int main()
{
    int t,n,i,j,a[50],b[50],c=0,tmp1,tmp2;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    tmp1=a[i];
                    a[i]=a[j];
                    a[j]=tmp1;
                }
                if(b[i]>b[j])
                {
                    tmp2=b[i];
                    b[i]=b[j];
                    b[j]=tmp2;
                }
            }
        }
        j=0;c=0;
        for(i=0;i<n;i++)
        {

            for(j=j;j<n;j++)
            {
                if(a[i]<=b[j])
                {
                    c++;
                    j++;
                    break;
                }
            }

        }
          printf("%d\n",c);

    }
    return 0;
}
