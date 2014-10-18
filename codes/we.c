#include<stdio.h>
int main(){
int t,i;
scanf("%d",&t);
for(i=0;i<t;i++)
{
int n;
scanf("%d",&n);
int c=0,q=0,d=5;
while(1)
{
q=n/d;
c=c+q;
if(q==0)
break;
d=d*5;
}
printf("%d\n",c);
}
return 0;
}
