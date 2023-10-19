#include <stdio.h>

int main(){
    int row,i,j;
    printf("Enter the number of rows:\n");
    scanf("%d",&row);
    int sp = row;
    for(i=1;i<=row;i++){
        for(int z = sp;z>0;z--){
            printf(" ");
        }
        sp--;
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
