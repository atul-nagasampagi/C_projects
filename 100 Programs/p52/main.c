#include <stdio.h>

int main()
{
    int i,n,perfect = 0;
    printf("Enter a number to check whether it is a perfect number or not:\n");
    scanf("%d",&n);

    for(i=1;i<n;i++){
        if(n%i == 0){
            perfect = perfect + i;
        }
    }
    if(perfect == n){
        printf("%d is a perfect number\n",n);
    }else{
        printf("%d is not a perfect number\n",n);
    }

    return 0;
}
