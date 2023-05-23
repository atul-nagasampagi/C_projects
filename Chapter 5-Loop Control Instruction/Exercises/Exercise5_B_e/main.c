#include <stdio.h>
#include <math.h>

int main()
{
    int lower = 1, upper = 500, num, rem, sum;


    num=lower;
    while(num<=upper) {
        int temp = num;
        sum = 0;
        while(temp != 0) {
            rem = temp % 10;
            sum =sum+pow(rem,3);
            temp =temp/10;
        }
        if(num == sum) {
            printf("%d\n",num);
        }
        num++;
    }



    return 0;
}
