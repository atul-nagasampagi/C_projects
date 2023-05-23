#include <stdio.h>

int main()
{
    int base,power,res=1,p;
    printf("Enter the base:\n");
    scanf("%d",&base);
    printf("Enter the power:\n");
    scanf("%d",&power);
    p = power;
    while(p>=1){
        res = res * base;
        p--;
    }
    printf("Result: %d\n",res);

    return 0;
}
