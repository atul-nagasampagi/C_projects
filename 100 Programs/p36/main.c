#include <stdio.h>

int main()
{
    int n,fact = 1,i;
    printf("Enter a number to calculate its factorial:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact = fact * i;
    }

    printf("Factorial of %d is %d\n",n,fact);
    return 0;
}
