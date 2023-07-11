#include <stdio.h>
#include <math.h>


int main() {
    int n;
    printf("Enter a number to check is it a armstrong number or not:\n");
    scanf("%d",&n);

    if(armstrong(n)){
        printf("%d is a armstrong number\n", n);
    }else{
        printf("%d is not a armstrong number\n",n);
    }
    return 0;
}

int armstrong(int num) {
    int temp = num;
    int count = 0;
    int result = 0;

    while(temp != 0) {
        temp /= 10;
        count++;
    }

    temp = num;
    while(temp != 0) {
        int rem = temp % 10;
        result += pow(rem, count);
        temp /= 10;
    }

    if(result == num){
        return 1;
    }
    else{
        return 0;
    }
}
