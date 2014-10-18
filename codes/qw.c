#include<stdio.h>
#include<stdlib.h>

int main()
{

    int n,m,i,j,k,d,tmp,g;
    char s;
    scanf("%d %d",&n,&m);
    int a[n+1];

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(m--)
    {
        fflush(stdin);
            scanf(" %c %d",&s,&g);

           if(s=='R')
            {

                d=a[g];

                printf("%d\n",d);

            }

           else if(s=='C')
            {


                for(j=1;j<=g;j++)
                {
                    tmp=a[1];
                    for(k=1;k<n;k++)
                    {

                        a[k]=a[k+1];
                    }
                    a[k]=tmp;
                }
               /* for(k=1;k<=n;k++)
                {
                    printf("%d",a[k]);
                }*/


            }
            else if(s=='A')
            {


                for(j=1;j<=g;j++)
                {
                    tmp=a[n];
                    for(k=n;k>1;k--)
                    {
                        a[k]=a[k-1];
                    }
                    a[1]=tmp;
                }
               /* for(k=1;k<=n;k++)
                {

                    printf("%d",a[k]);
                }*/

            }

            }
return 0;
}
