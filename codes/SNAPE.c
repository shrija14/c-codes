#include<stdio.h>
#include<math.h>

int main()
{

    int t,b,l;
    float x,y;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d",&b);
        scanf("%d",&l);
        x=pow(l,2);
        y=pow(b,2);
        printf("%f %f\n",sqrt(x-y),sqrt(x+y));
    }
    return 0;
}
