#include<stdio.h>
int primetest(int NUM){
    int i,count=0;
    if(NUM==1 || NUM==0){
        return 2;
    }
    for(i=1;i<=NUM;i++){
        if(NUM%i==0)
        count++;   
    }
    if(count==2)
    return 1;
    else
    return 0;
}
int main(){
    int num,opt;
    scanf("%d",&num);
    opt = primetest(num);
    if(opt==1)
    printf("PRIME");
    else if(opt==0)
    printf("COMPOSITE");
    return 0;
}