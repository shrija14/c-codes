#include<stdio.h>
int main()
{
    int i,j,c=0,n;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            printf("%d\n",i);
    }
    return 0;
}
