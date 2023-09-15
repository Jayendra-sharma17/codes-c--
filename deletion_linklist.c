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
struct node* deleteatfirst(struct node* head)
{
  
    struct node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node* deleteatindex(struct node* head,int index)
{
    struct node *p=head;
    struct node *q=head->next;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    
    return head;
}
struct node *deleteatlast(struct node *head)
{
    struct node *p=head;
    struct node *q=head->next;
    while (q->next!=NULL)
    {
      p=p->next;
      q=q->next;
    }
    p->next=NULL;
    free(q);
    
    return head;
}
struct node * deleteatvalue(struct node *head,int value)
{
    struct node *p=head;
    struct node *q=head->next;
    while (q->data!=value && q->next!=NULL)
    {
       p=p->next;
       q=q->next;
    }
    if (q->data==value)

    {
        p->next=q->next;
        free(q);
    }

    
    
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
printf("before traversal");
printf("\n");
//   head=insertatfirst(head,345);
// head=insertatindex(head,458,1);
// head=insertatlast(head,567);
// head=insertatanyindex(head,second,4545);
printf("after traversal");
// head=deleteatfirst(head);
// head=deleteatindex(head,2);
// head=deleteatlast(head);
head=deleteatvalue(head,5);


  traversal(head);
    return 0;
}