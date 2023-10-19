#include <stdio.h>

void reverse(int *,int);

int main()
{
    int n,i;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    reverse(arr,n);

    return 0;
}

void reverse(int *arr,int n){
    int *i,*temp = arr;

    arr = arr + n-1;

    for(i=arr;i>=temp;i--){
        printf("%d ",*i);
    }
}
