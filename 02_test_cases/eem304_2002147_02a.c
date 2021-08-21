#include<stdio.h>
void insertionsort(int a[],int N,int choice){
    int i,key,j;
    for(i=0;i<N;i++){
        key = a[i];
        j=i-1;
        if(choice == 0){
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j-=1;
        }}
        else if(choice == 1){
            while(j>=0 && a[j]<key){
            a[j+1]=a[j];
            j-=1;
        }
        }
        a[j+1]=key;
    }
    for(i=0;i<N;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int size,opt;
    scanf("%d",&size);
    scanf("%d",&opt);
    int i,arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    insertionsort(arr,size,opt);
    return 0;
}