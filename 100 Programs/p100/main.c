#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i+j == n-1){
                printf("%d ",arr[i]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
