#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();

struct st
{
    int data;
    struct st *link;
};
struct st *top=NULL;

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
    char ch;
    do
    {
        struct st *new=(struct st*)malloc(sizeof(struct st));
        if(!new)
        {
            printf("Memry allocation error\n");
        }
        printf("\nEnter data\n");
        scanf("%d",&new->data);
        new->link=NULL;
        if(top==NULL)
        {
            top=new;
        }
        else
        {
            new->link=top;
            top=new;
        }
        fflush(stdin);
        printf("\nDo you want to continue(y/n)\n");
        scanf("%c",&ch);
    }while(ch=='y');


}


void pop()
{
    struct st *temp;
    if(top==NULL)
        printf("Underflow\n");
    temp=top;
    printf("Element deleted is %d\n",temp->data);
    top=top->link;
    free(temp);

}

void display()
{
    struct st *p=top;
    if(top==NULL)
        printf("empty\n");
    while(p!=NULL)
    {
        printf("%d\n",p->data);
        p=p->link;
    }
}
