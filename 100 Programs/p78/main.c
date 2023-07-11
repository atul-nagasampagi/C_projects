#include <stdio.h>

void input();
void rev_arr(int *,int);
void arr(int *,int);

int main()
{
    input();

    return 0;
}

void input(){
    int n,i;
    printf("Enter the number of array elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    rev_arr(arr,n);

}

void rev_arr(int *array,int num){
    int i=num,j;
    printf("Reverse of an array:\n");
    for(j=num-1;j>=0;j--){
        printf("%d ",array[j]);
    }
    printf("\n");
    arr(array,num);
}

void arr(int *array, int num){
    int i=num,j;
    printf("Original array:\n");
    for(j=0;j<num;j++){
        printf("%d ",array[j]);
    }
    printf("\n");
}
