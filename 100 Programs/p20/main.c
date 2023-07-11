#include <stdio.h>

int main()
{
    int row,i,j;
    char k=65;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    int sp = row;
    for(i=0;i<row;i++){
        for(int z = sp;z>0;z--){
            printf(" ");
        }
        sp--;
        for(j=0;j<i;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    for(i=row;i>0;i--){
        for(int z = 0;z<sp;z++){
            printf(" ");
        }
        sp++;
        for(j=i;j>0;j--){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }

    return 0;
}
