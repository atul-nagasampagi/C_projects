#include <stdio.h>

int main() {
    int arr1[10][10],arr2[10][10],res[10][10],r1,c1,r2,c2,i,j,k;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter the elements of matrix A:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c1;j++) {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d",&r2,&c2);

    if (c1 != r2) {
        printf("Cannot multiply the matrices\n");
        return 1;
    }

    printf("Enter the elements of matrix B:\n");
    for(i=0;i<r2;i++) {
        for(j=0;j<c2;j++) {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            res[i][j] = 0;
            for(k=0;k<c1;k++) {
                res[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    printf("res of matrices A and B:\n");
    for(i=0;i<r1;i++) {
        for(j=0;j<c2;j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}
