#include <stdio.h>

int a=10;
static int b=10;

int main()
{
    int n,temp,key,i,j,flag=0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the key element to be searched:\n");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }


    if(key == arr[(sizeof(arr)/sizeof(arr[0]))/2]){
        flag=1;
    }else if(key < arr[(sizeof(arr)/sizeof(arr[0]))/2]){
        for(i=sizeof(arr)/sizeof(arr[0])/2;i>=0;i--){
            if(arr[i] == key){
                flag=1;
                break;
            }
        }
    }else if(key > arr[(sizeof(arr)/sizeof(arr[0]))/2]){
        for(i=((sizeof(arr)/sizeof(arr[0]))/2);i<(sizeof(arr)/sizeof(arr[0]));i++){
            if(arr[i] == key){
                flag=1;
                break;
            }
        }
    }

    if(flag == 0){
        printf("Element not found\n");
    }else{
        printf("Element found\n");
    }

    return 0;
}
