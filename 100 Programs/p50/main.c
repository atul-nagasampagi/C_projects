#include <stdio.h>

void interchange(int *,int *);

int main()
{
    int a,b;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);

    printf("Values before interchanging:\na = %d b = %d\n",a,b);

    interchange(&a,&b);

    printf("Values after interchanging:\na = %d b = %d\n",a,b);

    return 0;
}


void interchange(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
