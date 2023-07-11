#include <stdio.h>


int main() {

    int i,j,row,col,skew_symm=0,symm=0;
    printf("Enter the row of square matrix: ");
    scanf("%d", &row);

    printf("Enter the col of square matrix: ");
    scanf("%d", &col);

    int matrix[row][col];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(matrix[i][j] != matrix[j][i]){
                symm=0;
                goto line;
            }
        }
    }
    symm=1;

    line:
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(matrix[i][j] != -matrix[j][i]) {
                skew_symm=0;
                goto line1;
            }
        }
    }
    skew_symm=1;

    line1:
    if(symm && skew_symm){
        printf("Both Symmetric and Skew Symmetric\n");
    }else if(symm){
        printf("Symmetric\n");
    }else if(skew_symm){
        printf("Skew Symmetric\n");
    }else{
        printf("Neither Symmetric nor Skew Symmetric\n");
    }

    return 0;
}

