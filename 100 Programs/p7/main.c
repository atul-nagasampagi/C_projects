#include <stdio.h>

int main() {
    int num,rem,rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Individual digits: ");

    while(num != 0) {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }

    while(rev != 0) {
        rem = rev%10;
        printf("%d ",rem);
        rev = rev/10;
    }

    return 0;
}
