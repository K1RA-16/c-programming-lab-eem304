
#include<stdio.h>
void sieve(int N){
    int prime[N-1];
    int i,j;
    for(i=0;i<N-1;i++){
        prime[i]=1;
    }
    for(i=2;i<=N;i++){
        if(prime[i-2]==1){
            for(j=i*i;j<=N;j+=i){
                prime[j-2]=0;
            }
        }
    }
    for(i=0;i<N;i++){
        if(prime[i]==1)
        printf("%d ",i+2);
    }
}
int main(){
    int N;
    scanf("%d",&N);
    sieve(N);
    return 0;
}