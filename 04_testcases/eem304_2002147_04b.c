#include<stdio.h>
int findSum(int A[],int lo,int hi){
    if(lo<=hi)
    return (A[lo]*A[lo]) + (findSum(A,lo+1,hi));
    else
    return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int lo,hi;
    scanf("%d %d",&lo,&hi);
     if(lo>hi)
    return 0;
    if(lo>=n || hi>=n)
    return 0;
    printf("%d",findSum(A,lo,hi));
    return 0;
}