#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check its even or odd:\n");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is even\n",num);
    }else{
        printf("%d is odd\n",num);
    }
    return 0;
}
