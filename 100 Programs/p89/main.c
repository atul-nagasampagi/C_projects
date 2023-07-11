#include <stdio.h>

int main() {
    int number,rows,col,depth,len,i,j,k,l;
    printf("Enter the rows:\n");
    scanf("%d",&rows);
    printf("Enter the columns:\n");
    scanf("%d",&col);
    printf("Enter the depth:\n");
    scanf("%d",&depth);
    printf("Enter the length:\n");
    scanf("%d",&len);

    int matrix[len][depth][rows][col];

    printf("Enter the number:\n");
    scanf("%d",&number);

    for(i = 0; i < len; i++) {
        for (j = 0; j < depth; j++) {
            for (k = 0; k < rows; k++) {
                for (l = 0; l < col; l++) {
                    matrix[i][j][k][l] = number;
                    printf("%d ", matrix[i][j][k][l]);
                }
                printf("\n");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
