#include<stdio.h>
void option(int arr[]);
void calcMax(int arr[]);
void calcMin(int arr[]);
void input(){
    int arr[4];
    for(int i = 0; i < 4; i++){
        scanf("%d",&arr[i]);
    }
    option(arr);
}
void option(int arr[]){
    if(arr[3]==1){
        calcMax(arr);
    }
    else if(arr[3]==0){
        calcMin(arr);
    }
    else{
        printf("input a valid last digit");
    } 
}
void calcMax(int arr[]){
    int max = arr[0];
    for(int i = 1;i < 3;i++){
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    printf("%d",max);
}
void calcMin(int arr[]){
    int min = arr[0];
    for(int i = 1;i < 3;i++){
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    printf("%d",min);
}
int main(){
    input();
    return 0;
}
