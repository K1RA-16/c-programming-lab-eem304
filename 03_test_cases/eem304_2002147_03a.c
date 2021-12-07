#include<stdio.h>
#define MAX 500

void matmult(int A[][MAX],int B[][MAX],int P,int Q,int R);
void display(int A[][MAX], int rows, int cols);
int main(){
	int P,Q,R,i,j;
	scanf("%d %d %d",&P,&Q,&R);
	int A[P][MAX],B[Q][MAX];
	for(i=0;i<P;i++){
		for(j=0;j<Q;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<Q;i++){
	for(j=0;j<R;j++){
			scanf("%d",&B[i][j]);
		}
	}
	if(P>500 || Q>500 || R>500)
		{printf("enter array size less than 500");
		return 0;
	}
	
	matmult(A,B,P,Q,R);
	return 0;
}

void matmult(int A[][MAX],int B[][MAX],int P,int Q,int R){
	int i,j,k;
	int C[P][MAX];
	
	for(i=0;i<P;i++){
		for(j=0;j<R;j++){
			 C[i][j] = 0;
			for(k=0;k<Q;k++){
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
	
	display(C,P,R);
}

void display(int C[][MAX], int rows, int cols){
	int i=0,j=0;
	for(i=0;i<rows;i++)	
	{
	for(j=0;j<cols;j++){
			printf("%d ",C[i][j]);
		}
		printf("\n");
	}
} 