#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    float ds,dt,d,D;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f %f %f",&ds,&dt,&d);
        D=d-sqrt((3/4)*pow(ds,2))-sqrt((pow(dt,2))-((1/4)*pow(ds,2)));
        printf("%f\n",D);
    }
    return 0;

}
