#include <stdio.h>

void sum(int *,int *,int *);

int main()
{
    int a,b,res;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);

    sum(&a,&b,&res);

    printf("Sum: %d\n");

    return 0;
}

void sum(int *a, int *b, int *c){
    *c = *a + *b;
}
