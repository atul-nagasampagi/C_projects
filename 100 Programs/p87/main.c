#include <stdio.h>

void print_array(int *,int);

int main()
{
    int number_of_elements,i;
    printf("Enter the number of array elements:\n");
    scanf("%d",&number_of_elements);

    int arr[number_of_elements];

    printf("Enter the array elements:\n");
    for(i=0;i<number_of_elements;i++){
        scanf("%d",&arr[i]);
    }

    print_array(arr,number_of_elements);

    return 0;
}

void print_array(int *arr,int count){
    int i;
    for(i=0;i<count;i++){
        printf("%d ",*arr);
        arr++;
    }
}
