#include<stdio.h>
#include<string.h>


int main()
{
   int t,l1,l2,i,k,c=0,v[5];
   char j[105],s[105];
   scanf("%d",&t);
   while(t--)
   {
       c=0,k=0;
       int v[105]={0};
       scanf("%s",&j);
       scanf("%s",&s);
       l1=strlen(j);
       l2=strlen(s);
       for(i=0;i<l1;i++)
       {

           //k=-1;
           if(!v[k])
           for(;k<l2;k++)
           {

               if(j[i]==s[k])
               {
                   c++;
                   v[k]=1;
                   k++;


                   break;
               }

           }

       }
       printf("%d\n",c);

   }
   return 0;
}
