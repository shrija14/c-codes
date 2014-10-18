#include<stdio.h>

char p[1000005];

int main()
{
    long long t,max=0,c=0,i,d=0;
    scanf("%lld",&t);
    while(t--)
    {
        d=0;max=0;c=0;
        scanf("%s",&p);
        for(i=1;p[i]!='\0';i++)
        {
            if(p[i]=='.')
            {
                c++;

            }


            if(p[i]=='#')
            {
                if(c>max)
                {d++;
              max=c;}
              c=0;

            }
           // printf("%lld %lld\n",d,max);
           // if(c>max)
               // d++;

        }
        printf("%lld\n",d);
    }
    return 0;
}
