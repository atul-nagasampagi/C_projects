#include <stdio.h>

int main()
{
    int i,j,x=1,rows;

    printf("Enter the number of rows:\n");
    scanf("%d",&rows);

    printf("\n");
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}
