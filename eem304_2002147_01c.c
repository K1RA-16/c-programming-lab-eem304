#include<stdio.h>
int factrec(int N){
    if(N!=1)
    return N*factrec(N-1);
    else
    return 1;
}
int main(){
    int N;
    scanf("%d",&N);
    printf("%d",factrec(N));
}