#include<stdio.h>
#include<stdlib.h>
#define max 50
void push();
void pop();
void display();
int st[max];
int top=-1;

int main()
{
    int c;
    do
    {
        printf("What do you want?\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1: push();display();break;
            case 2: pop();display();break;
            case 3: display();break;
            case 4: exit(0);break;
            default: printf("Wrong choice");
        }
    }while(c);
    return 0;

}

void push()
{
    int n,ch;

    do
    {
        printf("Enter data\n");
        scanf("%d",&n);
        //top=top+1;
        if(top==50)
            printf("Overflow\n");
            else
            {
                top++;
                st[top]=n;
            }
        fflush(stdin);
        printf("Do you want to enter(0/1)?\n");
        scanf("%d",&ch);
    }while(ch);
    //return top;


}

void pop()
{
    if(top==-1)
        printf("Underflow\n");
    else{top=top-1;}
    //return top;
}

void display()
{
    int i;
    printf("The stack is:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\n",st[i]);
    }
}
