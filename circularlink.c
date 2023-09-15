#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node *head)
{
    struct node*ptr=head;
    do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
    // return head;
}

struct node *insertatfirst(struct node *head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=head)
    {
p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;
}

int main()
{
struct node *head;
struct node* second;
struct node *third;
struct node *fourth;

head=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third =(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));

head->data=44;
head->next=second;

second->data=34;
second->next=third;

third->data=98;
third->next=fourth;

fourth->data=90;
fourth->next=head;

head=insertatfirst(head,89);
traversal(head);

    return 0;
}