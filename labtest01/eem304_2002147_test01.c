#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct str1 {
	int p,q;
};

int trifecta(int);
int evenodd(int [], int);
void swap(struct str1 *, struct str1 *);

int main () {

 int *A; /* argument 1 of function evenodd() */
 /* QN - allocate a block of memory to A for holding 100 integers in the line below */
 A = (int*)malloc(100 * sizeof(int)); 
 
 int n1, n2, p1, p2, q1, q2;
 int t1, t2;
 int i;
 
 /* QN - declare two variables called x and y of type struct str1 in the line below */
 struct str1 x,y;
 
 /* Input from file redirection */

 scanf("%d", &n1); /* trifecta() */
 scanf("%d", &n2); /* argument 2 of evenodd() */
 for (i=0; i<n2; i++) scanf("%d", &A[i]); /* evenodd() */
 scanf("%d%d%d%d",&p1,&q1,&p2,&q2); /* for swap() */ 
 
 
 /* QN - assign p1 and q1 to x's p and q fields respectively, and 
	p2 and q2 to y's p and q fields respectively */
    x.p = p1;
    x.q = q1;
    y.p = p2;
    y.q = q2;

 /* Processing */
 t1=trifecta(n1); // function 1
 t2=evenodd(A,n2);  // function 2
 swap(&x,&y);     // function 3
 
 /* QN Assign back the values in the p and q fields of x to p1 and q1 respectively, 
	and assign the values in the p and q fields of y to p2 and q2 respectively
 */
 p1 = x.p;
 q1 = x.q;
 p2 = y.p;
 q2 = y.q;
 /* Output */
 printf("%d,%d,%d,%d,%d,%d",t1,t2,p1,q1,p2,q2);

 return 0;
}


int trifecta(int n) {
    int i;
    int x = 0;
    for(i=2;i<n;i++){
        if(n%i==0)
        x++;
    }
    if(x==1)
    return 1;
    else
    return 0;
}

int evenodd(int A[], int n) {
    int countE=0,countO=0;
    int i;
    for(i=0;i<n;i++){
        if(A[i]%2==0)
        countE++;
        else
        countO++;
    }
    if(countO==countE)
    return 0;
    else if(countE>countO)
    return 2;
    else
    return 1;
}

void swap(struct str1 *a, struct str1 *b) { 
    int q1,p1;
    q1 = a->q;
    p1 = a->p;
    a->p = b->q;
    a->q = b->p;
    b->p = q1;
    b->q = p1;
}