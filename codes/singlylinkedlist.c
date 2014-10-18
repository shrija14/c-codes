#include<stdio.h>
#include<stdlib.h>
void insert_at_end(int);
void insert_at_beg(int);
void delete_a_node(int);
void display();

struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL;

void insert_at_end(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(!temp)
    {
        printf("Memory Error");
        return;
    }
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        tail=temp;
    }
    else
    {
        tail->next=temp;
        tail=temp;
    }

}
void insert_at_beg(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(!temp)
    {
        printf("Memory Error");
        return;
    }
    temp->data=value;
    temp->next=NULL;
    if(head==NULL)
    {
        temp->next=NULL;
        head=temp;
        tail=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }

}
void delete_a_node(int value)
{
    struct node *temp,*temp1;
    temp=head;
    if(head->data==value)
    {
        temp=head;
        head=head->next;
        free(temp);
        printf("\nThe value is deleted successfully\n");
    }
    else
    {
        while(temp->next!=NULL)
        {
            if(temp->next->data==value)
            {
                temp1=temp->next;
                temp->next=temp->next->next;
                if(temp1==tail)
                {
                    tail=temp;
                }
                printf("\nThe value is deleted successfully\n");
                free(temp1);
                return;

            }
            temp=temp->next;

        }
        printf("\nThe value doesn't exist\n");
    }


}

void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

int main()
{
    int i,v;
    while(1)
    {
        printf("\nSelect an option:\n1.Insert at end\n2.Insert at beginning\n3.Delete a node\n4.Diaplay\n5.Exit\n");
        scanf("%d",&i);
        switch(i)
        {
        case 1:
            printf("\nEnter value to be inserted:\n");
            scanf("%d",&v);
            insert_at_end(v);
            break;
        case 2:
            printf("\nEnter value to be inserted:\n");
            scanf("%d",&v);
            insert_at_beg(v);
            break;
        case 3:
            printf("\nEnter value to be deleted:\n");
            scanf("%d",&v);
            delete_a_node(v);
            break;
        case 4:
            printf("\nThe linked list is:\n");
            display();
            printf("\n");
            break;
        case 5:
            return 0;

        }
    }
    return 0;
}

