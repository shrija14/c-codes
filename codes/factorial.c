#include<stdio.h>
int main()
{

     /*int N,T,z;
     scanf("%d",&T);
     while(T--)
     {

         scanf("\n%d",&N);

         z=N/5+N/25+N/125+N/625+N/3125+N/15625+N/78125+N/390625+N/1953125;
         printf("%d",z);
     }*/


     int a[100000],t,z,i;
     scanf("%d",&t);
     for(i=0;i<t;i++)
     {

         scanf("\n%d",&a[i]);
     }

     for(i=0;i<t;i++)
     {
         z=a[i]/5+a[i]/25+a[i]/125+a[i]/625+a[i]/3125+a[i]/15625+a[i]/78125+a[i]/390625+a[i]/1953125;
         printf("\n%d",z);

     }

}

