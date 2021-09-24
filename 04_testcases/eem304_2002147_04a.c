#include<stdio.h>
void hanoi(int n,char a,char c,char b){
    if(n==0)
    return;
    hanoi(n-1,a,b,c);
    printf("%d%c%c",n,a,c);
    hanoi(n-1,b,c,a);
}
int main(){
    int n;
    scanf("%d", &n);   
    hanoi(n,'A','C','B');
    return 0;
}