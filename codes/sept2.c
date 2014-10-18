#include<stdio.h>
#include<stdlib.h>
int a[100000];
int main()
{

    int n,m,i,j,k,d,tmp,p;
    char s[2];
    scanf("%d %d",&n,&m);
    //scanf("%d",&m);


    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
   // for(i=0;i<n;i++)
       // printf("%d",a[i]);
//printf("%d",m);
    while(m--)
    {

//printf("%d",m);
fflush(stdin);
           scanf("%s",&s);



            if(s[0]=='R')
            {
                p=(int)(s[1]);
                d=a[p-48-1];

                printf("%d\n",d);

            }

            if(s[0]=='C')
            {
                d=(int)(s[1]);
                for(j=0;j<d-48;j++)
                {
                    tmp=a[0];
                    for(k=0;k<n;k++)
                    {

                        a[k]=a[k+1];
                    }
                    a[k-1]=tmp;
                }
                for(k=0;k<n;k++)
                {
                    printf("%d\t",a[k]);
                }

            }
             if(s[0]=='A')
            {

                d=(int)(s[1]);
                for(j=0;j<d-48;j++)
                {
                    tmp=a[n-1];
                    for(k=n-1;k>=0;k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[0]=tmp;
                }
                for(j=0;j<n;j++)
                {

                    printf("%d ",a[j]);
                }
            }

    }
return 0;
}
