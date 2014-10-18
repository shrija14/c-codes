#include<stdio.h>
#include<stdlib.h>
void insertdl(int,int);
void display();

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL,*tail=NULL;

void insertdl(int position,int data)
{
    int k=1;
    struct node *temp,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(!newnode)
    {
        printf("\nMemory Error\n");
        return;
    }
    newnode->data=data;
    if(position==1)
    {
        newnode->next=head;
        newnode->prev=NULL;
        if(head)
            head->prev=newnode;
       head=newnode;
        return;
    }
    temp=head;
    while((k<position-1)&&temp->next!=NULL)
    {
        temp=temp->next;
        k++;
    }

    if(k!=position)
        printf("\nDesired position does not exist\n");
    newnode->next=temp->next;
    newnode->prev=temp;

    if(temp->next)
        temp->next->prev=newnode;
    temp->next=newnode;
    return;

}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",&temp->data);
        temp=temp->next;
    }
}

int main()
{
    int i,v;
    while(1)
    {
        printf("\nSelect an option:\n1.Insert at any position\n2.delete at any position\n4.Display\n5.exit\n");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("\nEnter position and number to insert:\n");
            scanf("%d %d",&i,&v);
            insertdl(i,v);
            break;
        case 4:
            printf("\nThe linked list is\n");
            display();
            break;
        case 5:
            exit(1);
        default:printf("\nWrong choice\n");

        }
    }
    return 0;
}
