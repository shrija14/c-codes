#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char m[25005],n[25005];

int main()
{

    long long t,i,j=0,flag=1,l1=0,l2=0;
    //char m[25001],n[25001];
    scanf("%d",&t);
    while(t--)
    {
        j=0;
        flag=1;

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
                        break;
                    j++;
                }
                if(j==l2)
                    flag=0;
                j++;
            }

        }

        else if(l1>l2)
        {
            for(i=0;n[i]!='\0';i++)
            {
                while(m[j]!='\0')
                {
                    if(n[i]==m[j])
                        break;

                    j++;
                }
                if(j==l1)
                    flag=0;
                j++;
            }

        }
        else if(l1==l2)
        {
            for(i=0;m[i]!='\0';i++)
                if(n[i]!=m[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}


