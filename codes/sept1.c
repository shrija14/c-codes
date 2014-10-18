#include<stdio.h>

int main()
{
    unsigned long int t,c=1,l=1,i,M=1000000000+7;
    char s[100000];
    scanf("%lu",&t);
    while(t--)
    {
        c=1;
        l=1;

        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            l++;
            if(l%2==0)
            {
                if(s[i]=='l')
                {
                    c=(c*2)%M;
                }
                else
                {
                    c=(c*2)%M+2;
                }
            }

            else
            {
                if(s[i]=='l')
                {
                    c=(c*2)%M-1;
                }
                else
                {
                    c=(c*2)%M+1;
                }



            }
        }
        printf("%lu\n",c);
    }
    return 0;
}
