#include <stdio.h>

int main()
{
    int pos,row,col;

    printf("Enter the position,row and col:\n");
    scanf("%d %d %d",&pos,&row,&col);
    int arr[pos][row][col],i,j,k;

    printf("Enter %d elements:\n",pos*row*col);

    for(i=0;i<pos;i++){
        for(j=0;j<row;j++){
            for(k=0;k<col;k++){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }


    for(i=0;i<pos;i++){
        for(j=0;j<row;j++){
            for(k=0;k<col;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
