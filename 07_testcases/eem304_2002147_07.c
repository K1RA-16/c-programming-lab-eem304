#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#define SIZE 20

typedef struct node_tag {
    char city[SIZE];
    struct node_tag *next;
} node;

 
int main () {

 node* head=NULL;
 int i,n;
 char item[SIZE];

 void push(node **, char []);
 int pop (node **);

 scanf("%d",&n);
 for (i=0; i<n; i++) {
    scanf("%s", item);
    push(&head, item);
 }

for (i=0; i<n; i++)
    printf("%d",pop(&head));

 return 0;
}

void push(node **head, char item[]) { 
   node* newNode = (node*)malloc(sizeof(node));
   if(*head == NULL){
      strcpy(newNode->city, item);
      newNode->next = NULL;
      *head = newNode;
   }
   else{
      strcpy(newNode->city, item);
      newNode->next = *head;
      *head = newNode;
   }
}

int pop(node ** head) {
   if (*head == NULL) {
        return -1;
    }
    node* hd = *head;
    char *c = hd->city;        // pull out data before the node is deleted
    int x = strlen(c);
    (*head) = (*head)->next; 
    hd->next = NULL; // unlink the head node for the caller
                                    // Note the `*` — uses a reference-pointer
                                    // just like `push()` and `deleteList()`.
    free(hd);             // free the head node
    return x;  
   
}