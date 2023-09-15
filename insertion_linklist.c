#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void traversal(struct node* ptr)
{
    while(ptr!=NULL)
    {
        printf("elements is %d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* insertatfirst(struct node* head,int data)
{
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
struct node* insertatindex(struct node *head ,int data, int index)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    struct node* p=head;
    int i=0;
    while(i!=index-1){
      p=p->next;
        i++;
    }
  ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;

    return head;
}
struct node* insertatlast(struct node *head, int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->next!=NULL)
    {
       p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
struct node* insertatanyindex(struct node* head,struct node *prevnode,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;
    return head;

}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
   head->data=4;
   head->next=second;
   
   second->data=5;
   second->next=third;

   third->data=22;
   third->next=fourth;
    
    fourth->data=45;
    fourth->next=NULL;

traversal(head);
printf("\n");
//   head=insertatfirst(head,345);
// head=insertatindex(head,458,1);
// head=insertatlast(head,567);
head=insertatanyindex(head,second,4545);
  traversal(head);
    return 0;
}