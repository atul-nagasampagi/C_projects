#include <stdio.h>

int main()
{
    int num,sum=0,rem,rev=0;
    line:
    printf("Enter a 3 digit number:\n");
    scanf("%d",&num);
    if(num>99 && num<1000){
        while(num>0){
            rem = num%10;
            rev = rev*10 + rem;
            sum = sum + rem;
            num = num/10;
        }
    }else{
        goto line;
    }

    printf("Sum: %d\n",sum);
    printf("Reverse: %d\n",rev);
    return 0;
}
