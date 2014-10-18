#include<stdio.h>
#include<string.h>

char m[25005],n[25005];

int main()
{

    long long t,i,j=0,c=0,l1=0,l2=0;
    //char m[25001],n[25001];
    scanf("%lld",&t);
    while(t--)
    {
        j=0;
        c=0;


        scanf("%s %s",&m,&n);

        l1=strlen(m);
        l2=strlen(n);
        if(l1<l2)
        {
            for(i=0;m[i]!='\0';i++)
            {
                while(n[j]!='\0')
                {
                    if(m[i]==n[j])
                    {
                        c++;break;
                    }
                    j++;
                }

                j++;
            }


        if(c==l1)
            printf("YES\n");
        else printf("NO\n");
        }

         if(l1>l2)
        {
            for(i=0;n[i]!='\0';i++)
            {
                while(m[j]!='\0')
                {
                    if(n[i]==m[j])
                    {
                        c++;break;
                    }

                    j++;
                }

                j++;
            }


        if(c==l2)
            printf("YES\n");
        else printf("NO\n");
        }

         if(l1==l2)
        {
            for(i=0;m[i]!='\0';i++)
                if(n[i]!=m[i])
            {
                c=-1;
            }

        if(c==-1)
            printf("NO\n");
        else printf("YES\n");
        }

    }
    return 0;
}


