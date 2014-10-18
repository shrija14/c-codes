#include<stdio.h>

int main()
{
    int n,a1=0,b1=0,a,b,max=0,w,win,lead;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        a1=a1+a;
        b1=b1+b;
        if(a1>b1)
        {
            lead=a1-b1;
            w=1;
        }
        else if(a1<b1)
        {
            lead=b1-a1;
            w=2;
        }
        if(lead>max)
        {
            max=lead;
            win=w;
        }





    }
     printf("%d %d\n",win,max);
     return 0;

}
