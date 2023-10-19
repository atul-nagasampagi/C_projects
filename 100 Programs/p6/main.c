#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to check its leap year or not:\n");
    scanf("%d",&num);

    if(num%4 == 0&&(num/100!=0||num%400==0)){
        printf("%d is leap year\n",num);
    }else{
        printf("%d is not a leap year\n",num);
    }
    return 0;
}
