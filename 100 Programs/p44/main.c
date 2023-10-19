#include <stdio.h>

int main()
{
    int pos,row,col;

    printf("Enter the position,row and col:\n");
    scanf("%d %d %d",&pos,&row,&col);
    int arr1[pos][row][col],arr2[pos][row][col],res[pos][row][col],i,j,k;

    printf("Enter %d elements of 1st 3D array:\n",pos*row*col);

    for(i=0;i<pos;i++){
        for(j=0;j<pos;j++){
            for(k=0;k<pos;k++){
                scanf("%d",&arr1[i][j][k]);
                scanf("%d",&arr2[i][j][k]);
                res[i][j][k] = arr1[i][j][k] + arr2[i][j][k];
            }
        }
    }

    printf("The resultant 3D array is:\n");
    for(i=0;i<pos;i++){
        for(j=0;j<pos;j++){
            for(k=0;k<pos;k++){
                printf("%d ",res[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
