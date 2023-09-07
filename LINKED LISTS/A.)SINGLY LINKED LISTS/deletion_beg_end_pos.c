
#include<stdio.h>
#include<stdlib.h>

struct node{

int data;
struct node *next;
};

int linkedliststraversal(struct node*ptr)
{
while(ptr!=NULL)
 {
    printf("value of nodes=%d\n",ptr->data);
    ptr=ptr->next; //movemenet for entering values
 }
}

struct node* deletingatbeg(struct node*head)
{struct node*p=head;  //IKKaDA PTR BADHULU AA TEMP EY DEVVUDU LAGA DHIGI VACHINDHI MYAN

head=head->next;  //shifting head
p->next=NULL;

return head;
}

struct node* deleteatindex(struct node*head,int index)
{
struct node*p=head;  //IKKaDA PTR BADHULU AA TEMP EY DEVVUDU LAGA DHIGI VACHINDHI MYAN
int i=0;
while(i!=index-1)
{
p=p->next;
i++; //till index is reached
}

struct node*q=p->next;
p->next=q->next;  //link is breaked yar
free(q);  //automatically link is broken
return head;
}

//remob=ve a node at last of element

struct node*deleteatend(struct node*head)
{
struct node*p=head;
struct node*q=head->next;


while(q->next!=NULL)  //when q moves automatically p follow back
{
p=p->next;  //when q confirms with null then p mmoves from backwards
q=q->next;
}
p->next=NULL;
free(q);
return head;

p->next=NULL;


}
//deleting node after the values
struct node *deleteaftvalue(struct node*head,int value)
{
struct node*p=head;
struct node*q=head->next;

while(q->data=value && q->next!=NULL) //if do not happend lol bc
{
p=p->next;
q=q->next;
}

if(q->data==value)
{
p->next=q->next;// this is were links breaks
free(q);
}
return head;
}



int main()
{
struct node*second=NULL;
struct node*head=NULL;
struct node*third=NULL;



head=(struct node*)malloc(sizeof(struct node));

second=(struct node*)malloc(sizeof(struct node));

third=(struct node*)malloc(sizeof(struct node));


head->data=7;
head->next=second;

second->data=14;
second->next=third;

third->data=45;
third->next=NULL;

linkedliststraversal(head);

printf("\n");

//head=deleteatindex(head,2);

head=deleteaftvalue(head,2);
linkedliststraversal(head);

return 0;


}