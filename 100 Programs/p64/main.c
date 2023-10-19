#include <stdio.h>
#include <math.h>


int main() {
    int i;
    printf("Armstrong numbers between 1 to 500:\n");

    for(i=1;i<=500;i++) {
        if(armstrong(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
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
