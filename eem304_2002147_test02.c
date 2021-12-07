#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

typedef struct node_tag {
     int val;
    struct node_tag *prev, *next;
} node;

void display (node* head);
void push(node** head, int data);
int prime(node* head);

 int main () {
 node* head=NULL; /* Use only this as the head ptr of your list. 
					You may not make a global declaration.
					Make other function declarations accordingly. */
	
int N;			
 /* Your remaining declarations, code go here */
 scanf("%d",&N);
 int x;
 int N1=N;
 node* ptr = NULL;
 while(N--){

 	scanf("%d",&x);
	push(&ptr,x);
    if(N==N1-1)
    head = ptr;
 }
				
 display(head); /*do not change this line */
 
 return 0;
}

/* your functions go here */

void push(node** head, int data)
{
	node* new_node = (node*)malloc(sizeof(node));
	new_node->val = data;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head != NULL)
        (*head)->prev = new_node;
	*head = new_node;
   
}


int prime(node *head){
	int x = head->val;
	int i,count = 0;
	for(i=2;i<x;i++){
		if(x%i == 0)
		count++;
	}
	if(count>0)
	return 1;
	else
	return 0;
}
/* An incomplete implementation is provided below for the display function. 
Complete it in any way you like, but make sure you use the printf() call as-it-is. 
Use it inside a loop as needed, you may fill in the args as required etc. */

void display (node* head) {
		/* your code goes here */

		while(head!=NULL){
		int prim = prime(head);
		if(prim == 0)
		printf("->%d",head->val);
		
		head = head->prev;
	}
}