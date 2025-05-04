#include <stdio.h>
int main(){
    int row,col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&row,&col);
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element of rows and colums:mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}