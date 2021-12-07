#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct sparceMatrix
{
    int row;
    int col;
    int el;
}
a[100],b[100],c[100];
int main()
{
   int rowA=0,colA=0,la=0,rowB=0,colB=0,lb=0,i,pos1=0,pos2=0,pos3=0; 
   scanf("%d",&rowA);
   scanf("%d",&colA);
   scanf("%d",&la); 
   scanf("%d",&rowB);
   scanf("%d",&colB);
   scanf("%d",&lb);
   for(i=0;i<la;i++)
   {
       scanf("%d",&a[i].row);
       scanf("%d",&a[i].col);
       scanf("%d",&a[i].el);
   }
   for(i=0;i<lb;i++)
   {
       scanf("%d",&b[i].row);
       scanf("%d",&b[i].col);
       scanf("%d",&b[i].el);
   }
   if(rowA==rowB && colA==colB)
   {
    while(la>pos1 && lb>pos2)
    {
        if(a[pos1].row<b[pos2].row || (a[pos1].row==b[pos2].row && a[pos1].col<b[pos2].col) )
        {
            c[pos3].row=a[pos1].row;
            c[pos3].col=a[pos1].col;
            c[pos3].el=a[pos1].el;
            pos3++;
            pos1++;
        }
        else if(a[pos1].row>b[pos2].row || (a[pos1].row==b[pos2].row && a[pos1].col>b[pos2].col) )
        {
            c[pos3].row=b[pos2].row;
            c[pos3].col=b[pos2].col;
            c[pos3].el=b[pos2].el;
            pos3++;
            pos2++;
        }
        else
        {
            c[pos3].row=b[pos2].row;
            c[pos3].col=b[pos2].col;
            c[pos3].el=a[pos1].el+b[pos2].el;
            pos3++;
            pos2++;
            pos1++;
        }
    }
    while(la>pos1)
    {
        c[pos3].row=a[pos1].row;
        c[pos3].col=a[pos1].col;
        c[pos3].el=a[pos1].el;
        pos3++;
        pos1++;
    }
    while(lb>pos2)
    {
        c[pos3].row=b[pos2].row;
        c[pos3].col=b[pos2].col;
        c[pos3].el=b[pos2].el;
        pos3++;
        pos2++;
    }
    
    printf("%d ",rowA);
    printf("%d ",colA);
    printf("%d ",pos3);
    printf("\n");
    for(i=0;i<pos3;i++)
    {
        printf("%d ",c[i].row);
        printf("%d ",c[i].col);
        printf("%d ",c[i].el);
        printf("\n");
    }
   }
   else 
   return 0;
}