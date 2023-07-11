#include <stdio.h>

int main()
{
    int len1,len2,len3,i,j;
    printf("Enter the size of array 1:\n");
    scanf("%d",&len1);


    printf("Enter the size of array 2:\n");
    scanf("%d",&len2);

    printf("Enter the size of array 3:\n");
    scanf("%d",&len3);

    int arr1[len1],arr2[len1+len2],arr3[len1+len2+len3],res[len1+len2+len3];

    printf("Enter the %d elements of array 1:\n",len1);
    for(i=0;i<len1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("Enter the %d elements of array 2:\n",len2);
    for(i=0;i<len2;i++){
        scanf("%d",&arr2[i]);
    }

    printf("Enter the %d elements of array 3:\n",len3);
    for(i=0;i<len3;i++){
        scanf("%d",&arr3[i]);
    }

    for(i=0;i<len1;i++){
        res[i] = arr1[i];
    }

    for(i=len1,j=0;i<len1+len2;i++,j++){
        res[i] = arr2[j];
    }

    for(i=len1+len2,j=0;i<len1+len2+len3;i++,j++){
        res[i] = arr3[j];
    }

    for(i=0;i<len1+len2+len3;i++){
        for(j=i+1;j<len1+len2+len3;j++){
            if(res[i]>res[j]){
                int temp = res[i];
                res[i] = res[j];
                res[j] = temp;
            }
        }
    }


    for(i=0;i<len1+len2+len3;i++){
        printf("%d ",res[i]);
    }
    printf("\n");

    return 0;
}
