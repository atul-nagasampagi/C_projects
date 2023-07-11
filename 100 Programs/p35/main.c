#include <stdio.h>

int sum(int,int);

int main()
{
    int a,b,res;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);

    res = sum(a,b);

    printf("Sum: %d\n",res);

    return 0;
}

int sum(int a, int b){
    return a+b;
}
