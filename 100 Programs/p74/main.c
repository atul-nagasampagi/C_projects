#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to check whether is it divisible by 11 or not:\n");
    scanf("%d",&n);

    if(n%11 == 0){
        printf("%d is divisible by 11\n",n);
    }else{
        printf("%d is not divisible by 11\n",n);
    }
    return 0;
}
