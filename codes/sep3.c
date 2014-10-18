#include<stdio.h>

int main()
{
    long int n,d,c=0,M=100000000+7;
    scanf("%ld",&n);
    if(n<13)
    {
        printf("%ld",0);
    }
    else if(n==13||n==14)
    {
        printf("%ld",1);
    }
    else
    {
      d=n-13;
      if(d%2==0)
      {
          c=(6*(d-1))%M+1;
      }
      if(d%2!=0)
      {
          c=(6*(d-2))%M+2;
      }
      printf("%ld\n",c);
    }
    return 0;
}
