#include <stdio.h>

int main()
{
    int i,n,prime = 1;
    printf("Enter a number to check whether prime number or not:\n");
    scanf("%d",&n);

    for(i=2;i<n;i++){
        if(n%i == 0){
            prime = 0;
        }
    }

    if(prime && n!=1){
        printf("%d is prime number\n",n);
    }else{
        printf("%d is not a prime number\n",n);
    }

    return 0;
}
