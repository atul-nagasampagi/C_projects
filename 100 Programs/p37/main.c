#include <stdio.h>
#include <math.h>

int main() {
    int num, ori_num, rem, result = 0, count = 0;

    printf("Enter an integer:\n");
    scanf("%d",&num);



    ori_num = num;

    while(ori_num != 0) {
        ori_num /= 10;
        count++;
    }

    ori_num = num;

    while (ori_num != 0) {
        rem = ori_num % 10;
        result += pow(rem,count);
        ori_num /= 10;
    }

    if(result == num){
        printf("%d is an Armstrong number\n",num);
    }else{
        printf("%d is not an Armstrong number\n",num);
    }

    return 0;
}
