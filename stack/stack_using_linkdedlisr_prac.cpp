#include<iostream>
using namespace std;
struct node{
    int data;
struct node *next;
};
struct node *top=NULL;
void linklisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
printf("elements is %d\n",ptr->data);
ptr=ptr->next;
    }
}
int isempty(struct node *top)
{
    if (top==NULL)

    {
      return 1;
    }
    else{
        return 0;
    }
    
}
int isfull(struct node *ptr)
{
    struct node *p=(struct node*)malloc(sizeof(struct node*));
    if (p==NULL)
    {
     printf("full");   
     return 1;
    }
    else{
        return 0;
    }
    
}
struct node *push(struct node *top,int x)
{
    if (isfull(top))

    {printf("overflow");
    }
    else{
        struct node *p=(struct node*)malloc(sizeof(struct node*));
        p->data=x;
        p->next=top;
        top=p;
        return top;
    }
    
}
int pop(struct node *tp)
{
    if (isempty(tp))
    {
     printf("stack underflow");
    }
    else{
        struct node *p=tp;
          top=(tp)->next;
        int x=p->data;
      
        free(p);
        return (x);
    }
    
}
int peek(int pos)
{
    struct node *ptr=top;
    for (int i = 0; (i < pos-1 && ptr!=NULL); i++)
    {
        ptr=ptr->next;
    }
    if (ptr!=NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
    
    
}
int main()
{
    top=push(top,33);
    top=push(top,44);
    top=push(top,55);
    top=push(top,90);
    // int popel=pop(top);
    // printf("%d",popel);
      linklisttraversal(top);
  for (int i = 1; i <4; i++)
  {
printf("element at your postion is %d",i,peek(i));

  }
  
    return 0;
}