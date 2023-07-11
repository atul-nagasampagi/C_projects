#include <stdio.h>

int main(){
    int row,i,j;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    int row1 = row;
    for(i=1;i<=row1;i++){
        for(int z = 1;z<i;z++){
            printf(" ");
        }
        for(j=1;j<=row;j++){
            printf("* ");

        }
        printf("\n");
        row--;
    }
    return 0;
}
