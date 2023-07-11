#include <stdio.h>

int main()
{
    int row,col,i,j,flag=0;
    printf("Enter the number of rows in the matrix:\n");
    scanf("%d",&row);
    printf("Enter the number of columns in the matrix:\n");
    scanf("%d",&col);

    int matrix[row][col];

    printf("Enter %d elements:\n",row*col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j){
                if(matrix[i][j]==0){
                    flag = 1;
                }
            }
            if(i!=j){
                if(matrix[i][j]!=0){
                    flag = 1;
                }
            }
        }
    }

    if(flag){
        printf("It is not a Diagonal matrix\n");
    }else{
        printf("It is a Diagonal matrix\n");
    }



    return 0;
}
