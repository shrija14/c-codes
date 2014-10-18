#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
char s[1001];

int main()
{
    long long t,flag=1,i,a[26]={0},b[26]={0},l=0;
    //char s[1001];
    scanf("%lld",&t);
    while(t--)
    {
        //fflush(stdin);
        scanf("%s",&s);
        l=strlen(s);

        flag=1;
        for(i=0;i<l/2;i++)
        {
            a[s[i]-'a']++;
        }
        for(i=(l+1)/2;i<l;i++)
        {
            b[s[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {

            if(a[i]!=b[i])

                   flag=0;
                a[i]=0;
                b[i]=0;

        }
        if(flag==0)
            printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
