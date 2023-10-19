#include <stdio.h>

int main()
{
    int arr[10],i;
    printf("Enter 10 numbers:\n");
    for(i=0;i<10;i++){
        if(i<5){
            scanf("%d",&arr[i]);
        }
    }

    i--;

    while(i>4){
        scanf("%d",&arr[i]);
        i--;
    }

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
