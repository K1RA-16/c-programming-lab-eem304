#include<stdio.h>
int nrowsA,ncolsA,nelemsA,nrowsB,ncolsB,nelemsB;
void makeZero(int A[][ncolsA],int B[][ncolsB]){
    int i,j;
    for(i=0;i<nrowsA;i++){
        for(j=0;j<ncolsA;j++){
            A[i][j]=0;
        }
    }

    for(i=0;i<nrowsB;i++){
        for(j=0;j<ncolsB;j++){
            B[i][j]=0;
        }
    }
}
int add(int A[][ncolsA],int B[][ncolsB]){
    int i,j,n=0;
    for(i=0;i<nrowsA;i++){
        for(j=0;j<ncolsA;j++){
            A[i][j] = A[i][j]+B[i][j];
            if(A[i][j] != 0)
            n++; 
        }
    }
    return n;
}
int main(){

    scanf("%d %d %d",&nrowsA,&ncolsA,&nelemsA);
    scanf("%d %d %d",&nrowsB,&ncolsB,&nelemsB);
    if(nrowsA != nrowsB || ncolsA != ncolsB)
    return 0;
    int i=0,j=0;
    int A[nrowsA][ncolsA],B[nrowsB][ncolsB];
    int Aelems[nelemsA][3],Belems[nelemsB][3];
    for(i=0;i<nelemsA;i++)
    {
        scanf("%d %d %d",&Aelems[i][0],&Aelems[i][1],&Aelems[i][2]);
    }
     for(i=0;i<nelemsB;i++)
    {
        scanf("%d %d %d",&Belems[i][0],&Belems[i][1],&Belems[i][2]);
    }  
    int r,c;
    makeZero(A,B);
    for(i=0;i<nelemsA;i++){
        r=Aelems[i][0];
        c=Aelems[i][1];
        A[r][c] = Aelems[i][2];
    }
    for(i=0;i<nelemsB;i++){
        r=Belems[i][0];
        c=Belems[i][1];
        B[r][c] = Belems[i][2];
    }
    int n = add(A,B);
    printf("%d %d %d\n", nrowsA,ncolsA,n);
    for(i=0;i<nrowsA;i++){
        for(j=0;j<ncolsA;j++){
            if(A[i][j]!=0)
            printf("%d %d %d\n",i,j,A[i][j]);
        }
    }
    return 0;

}