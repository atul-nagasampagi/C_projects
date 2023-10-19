#include <stdio.h>

int main()
{
    int num,sum=0,rem;
    line:
    printf("Enter a 3 digit number:\n");
    scanf("%d",&num);
    if(num>99 && num<1000){
        while(num>0){
            rem = num%10;
            sum = sum + rem;
            num = num/10;
        }
    }else{
        goto line;
    }

    printf("Sum of Individual digits is: %d\n",sum);
    return 0;
}
