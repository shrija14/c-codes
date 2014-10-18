#include<stdio.h>
#include<string.h>
char s[100005];

int main()
{
    int t,l,i,flag;

    scanf("%d",&t);
    while(t--)
    {
        flag=0;
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(((s[i]=='1')&&(s[i+1]=='0')&&(s[i+2]=='1'))||((s[i]=='0')&&(s[i+1]=='1')&&(s[i+2]=='0')))
            {
                flag=1;
                //i+=3;
                break;
            }
        }
        if(flag==0)
            printf("Bad\n");
        else printf("Good\n");
    }
}
