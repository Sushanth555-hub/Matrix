#include <stdio.h>
int main(){
    printf("Enter the rows or coloums of the square matrix: ");
    int n;
    //Taking the input of rows and col
    scanf("%d",&n);
    int arry1[n][n],arry2[n][n],sum[n][n];
        //input 1st matrix
       for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++){
            printf("arry1[%d][%d]=",i,j);
            scanf("%d",&arry1[i][j]);
        }
    }
        //input 2nd matrix
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("arry2[%d][%d]=",i,j);
            scanf("%d",&arry2[i][j]);
        }
    }
    //sum of two element of the matrix
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arry1[i][j]+arry2[i][j];
        }
    }
        //print the sum matrix
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}