#include <stdio.h>
int main(){
    int n,c=1;
    printf("Enter the number of rows or column ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
         printf("Enter the Element mat[%d][%d]=",i,j);
         scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=mat[j][i]){
                c=0;
            }
        }
    }
    if(c){
        printf("The Matrix is symmetric");
    }else{
        printf("The matrix is not symmetric");
    }
}