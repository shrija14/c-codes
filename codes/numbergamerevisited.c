#include<stdio.h>

int main()
{

    int t;
    long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        if(n%4==1)
            printf("ALICE\n");
            else
                printf("BOB\n");


    }
    return 0;
}
