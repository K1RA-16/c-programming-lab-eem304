#include<stdbool.h>
#include<stdio.h>
void sieve(int N){
    bool prime[N-1];
    int i,j;
    for(i=0;i<N-1;i++){
        prime[i]=true;
    }
    for(i=2;i<=N;i++){
        if(prime[i-2]==true){
            for(j=i*i;j<=N;j+=i){
                prime[j-2]=false;
            }
        }
    }
    for(i=0;i<N;i++){
        if(prime[i])
        printf("%d\n",i+2);
    }
}
int main(){
    int N;
    scanf("%d",&N);
    sieve(N);
    return 0;
}