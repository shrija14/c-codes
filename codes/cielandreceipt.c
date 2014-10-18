#include<stdio.h>

int main()
{

    int t,p,c,i;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&p);
        for(i=2048;i>0&&p>0;)
        {
            if(p/i==0)
                i=i/2;
            else
            {
                c++;
                p=p-i;
            }

        }
        printf("%d\n",c);


    }
}
