#include <stdio.h>

void interchange(int *,int *);

int main()
{
    int num1,num2;
    printf("Enter the value of num1 and num2:\n");
    scanf("%d %d",&num1,&num2);

    printf("Values before interchanging: num1 = %d num2 = %d\n",num1,num2);

    interchange(&num1,&num2);

    printf("Values after interchanging: num1 = %d num2 = %d\n",num1,num2);

    return 0;
}

void interchange(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
