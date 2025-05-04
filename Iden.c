#include <stdio.h>
int main(){
    int n;
    printf("Enter the numbers of row and columnn: ");
    scanf("%d",&n);
    int mat[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("Enter the element arr[%d][%d]=",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);   
        }
        printf("\n");
    }
    printf("The primary daigonal elemrnts are ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                printf("%d ",mat[i][j]);
            }
        }
    }
    printf("The Secondary daigonal elemrnts are ");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==n-i-1){
                printf("%d ",mat[i][j]);
            }
        }
    }
}