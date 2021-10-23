#include <stdio.h>
#include <stdlib.h>
void insertAtHead(int no);
void insertAfter(int itemafter,int after);
void insertBefore(int itembefore,int before);
void deleteItem(int itemDelete);
void traverse (void);

 typedef struct node_tag
 {
    int val;
    struct node_tag * next;
 } node;

 node *head;

 int main ()
 {
head=(node*)malloc(sizeof(node));
 int i,n, before, after, itemBefore, itemAfter, itemDelete;
 void insertAtHead(int n);
 void insertBefore (int itemBefore, int before);
 void insertAfter (int itemAfter, int after);
 void traverse(void);
 void deleteItem(int itemDelete);

 scanf("%d",&n);
 scanf("%d",&itemBefore);
 scanf("%d",&before);
 scanf("%d",&itemAfter);
 scanf("%d",&after);
 scanf("%d",&itemDelete);
 insertAtHead(0);
 for (i = 2; i<=n; i+=2)
     insertAfter(i,i-2);

insertAfter(itemAfter, after);
insertBefore(itemBefore, before);
deleteItem(itemDelete);
traverse();

 return 0;
}
void insertAtHead(int no)
{
    head->val=no;
    head->next=NULL;
}
void insertAfter(int itemafter,int after)
{   node *p;
    node *nn;
    node *q;
    nn=( node*)malloc(sizeof(node));
    p=head;
    while(p!=NULL)
    {

    if(p->val==after)
        {
            nn->val=itemafter;
            q=p->next;
            if(q!=NULL)
                nn->next=q;
            else
                nn->next=NULL;
    p->next=nn;

        }
    p=p->next;

    }
}
void insertBefore(int itembefore,int before)
{
    int i=0,n=0;
    node *p;
    node *nn;
    node *q;
    nn=( node*)malloc(sizeof(node));
    p=head;
    q=head;
    while(p!=NULL)
    {
        n++;

    if(p->val==before && before!=0)
    {
        while(i<n-2)
        {
            i++;
            q=q->next;
        }
        nn->val=itembefore;
        nn->next=p;
        q->next=nn;
    }
    else if(before==0 && n==1)
    {
        nn->val=itembefore;
        nn->next=p;
        head=nn;
    }
    p=p->next;

    }
}
void deleteItem(int itemDelete)
{
    int i=1,n=1;
    node *temp;
    node *cr;
    node *news;
    temp=head;
    cr=head;
    while(temp!=NULL)
    {
        n++;
        if(temp->val==itemDelete && itemDelete!=0)
        {
          while(i<n-2)
          {
              i++;
              cr=cr->next;
          }
          news=temp->next;
          cr->next=news;
        }
        else if(itemDelete==0 && n==2)
        {
        cr=temp->next;
        head=cr;
        }
        temp=temp->next;
    }
}
void traverse (void)
{
    node * n = head;
    while (n)
    {
		printf("->%d",n->val);
		n = n->next;
	}
}

