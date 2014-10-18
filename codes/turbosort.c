#include<stdio.h>
long long int a[1000001],b[1000001];
int main()
{
    long long int t,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
        scanf("%lld",&a[i]);
    for(i=0;i<t;i++)
        b[i]=0;
    for(i=0;i<t;i++)
        b[a[i]]++;
    for(i=0;i<1000001;i++)
    {
        if(b[i]!=0)
        {
            while(b[i])
                {printf("%lld\n",i);
                b[i]--;}
        }
    }
    return 0;
}









    /*#include<stdio.h>

int main()
{
        int i,num,arr[1000001]={0},n;
        scanf("%d",&num);
        for(i=0;i<num;i++)
        {
               scanf("%d",&n);
               arr[n]++;
        }
        for(i=0;i<1000001;i++)
               if(arr[i])
                       while(arr[i]--)
                               printf("%d\n",i);
        return 0;
}/*#include<stdio.h>
#define n 1000000
long a[n],b[n];
int main()
{
	long t,q,r,i=0;
	scanf("%ld",&q);
	t=q;
	while(t--)
	{
		scanf("%ld",&r);
		if(a[r]==0)
		a[r]=r;
		else
		b[r]++;

	}
	while(i<n)
	{
		if(a[i]!=0)
		printf("%ld\n",a[i]);
		while(b[i]--)
		printf("%ld\n",a[i]);
		i+=1;
	}
	return(0);
}*//*#include<stdio.h>
#define size 1000001
int main()
{
        int t, i, val;
        scanf("%d", &t);
        int arr[size];
        for(i = 0; i <= size; i++)
                arr[i] = 0;
        for(i = 0; i < t; i++)
        {
                scanf("%d", &val);
                arr[val]++;
        }

        for(i = 0; i <= size; i++)
        {
                if(arr[i]!=0)
                {
                        while(arr[i]--)
                        printf("%d\n", i);
                }
        }
}*/ /*#include<stdio.h>

int main()
{

    int t,i,n;
    scanf("%d",&t);
    int b[1000001];
    for(i=0;i<=1000001;i++)
    {
        b[i]=0;
    }
    //long a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",n);
        b[n]++;
    }
    for(i=0;i<=1000001;i++)
    {
        if(b[n]!=0)
        {

            while(b[i]--)
            printf("%d\n",i);
        }
    }
    return 0;
}*/
