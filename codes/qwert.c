#include<stdio.h>
#include<stdlib.h>
int a[100000];
int main()
{

    int n,m,i,j,k,d,tmp,p,g;
    char s;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(m--)
    {
        fflush(stdin);
            scanf("%c %d",&s,&g);

           if(s=='R')
            {

                d=a[g-1];

                printf("%d\n",d);

            }

           else if(s=='C')
            {


                for(j=0;j<g;j++)
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
                    printf("%d",a[k]);
                }


            }
            else if(s=='A')
            {


                for(j=0;j<g;j++)
                {
                    tmp=a[n-1];
                    for(k=n-1;k>=0;k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[0]=tmp;
                }
                for(k=0;k<n;k++)
                {

                    printf("%d",a[k]);
                }

            }

            }
return 0;
}
