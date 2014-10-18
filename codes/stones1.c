#include<stdio.h>
#include<string.h>


int main()
{
   int t,l1,l2,i,k,c=0;
   char j[105],s[105];
   scanf("%d",&t);
   while(t--)
   {
       c=0;

       scanf("%s",&j);
       scanf("%s",&s);
       l1=strlen(j);
       l2=strlen(s);
       for(i=0;i<l2;i++)
       {

           for(k=0;k<l1;k++)
           {

               if(s[i]==j[k])
               {
                   c++;
                   break;
               }

           }

       }
       printf("%d\n",c);

   }
   return 0;
}

