#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the row of the matric ");
    scanf("%d %d",&row,&col);
    int mat[row][col],mat2[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
         printf("Mat[%d][%d]=",i,j);
         scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
          printf("%d ",mat[j][i]); 
        }
        printf("\n");
    }
}