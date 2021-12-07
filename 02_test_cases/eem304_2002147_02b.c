#include<stdio.h>
#include <stdlib.h>
void insertionsort(int a[],int N){ 
     int i,key,j;
    for(i=0;i<N;i++){
        key = a[i];
        j=i-1;
    
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j-=1;
        }

        a[j+1]=key;
    }
    for(i=N-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
}
void selectionsort(int a[],int N){
    int def;
    int i,j,k;
    for(j=0;j<N;j++){
        def=a[j];
        k=j;
       for(i=j+1;i<N;i++){
         if(a[i]<def){
            def=a[i];
            k=i;
         }
        }
        a[k] = a[j];
        a[j] = def;     
    }
    for(i=N-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    
}
void bubblesort(int a[],int N){
    int i,def,x=1;
    while(x!=0)
    {
        x=0;
        for(i=0;i<N-1;i++){
        if(a[i]>a[i+1]){
            def = a[i+1];
            a[i+1] = a[i];
            a[i] = def;
            x++;
         }
        }
    }
     for(i=N-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int size,i,x;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        scanf("%d",&x);
        arr[i] = x;
    }
    insertionsort(arr,size);
    selectionsort(arr,size);
    bubblesort(arr,size);
    return 0;
}