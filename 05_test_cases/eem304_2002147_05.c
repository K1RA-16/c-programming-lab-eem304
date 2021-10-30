#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Stack {
    int top;
    unsigned capacity;
    int* array;
};
 struct Stack* createStack(unsigned capacity)
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}
 
int isFull(struct Stack* stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1;
}
void push(struct Stack* stack, int item)
{
    if (!isFull(stack))
    stack->array[++stack->top] = item;
  
}
void pop(struct Stack* stack)
{
    if (!isEmpty(stack))
    stack->top--;
}
void display(struct Stack* stack)
{
   int i = 0;
    while(i<=stack->top){
    printf("%d ",stack->array[i++]);
    
    }
}
int main()
{
    struct Stack* stack = createStack(10);
    int n,t;
    while(1){
        scanf("%d",&t);
        if(t==1){
            scanf("%d",&n);
            push(stack,n);
        }        
        else if(t==2){
            pop(stack);
        }
        else if(t==3)
        display(stack);
        else if(t==4)
        break;
    }
    return 0;
}