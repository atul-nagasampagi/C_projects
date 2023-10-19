#include <stdio.h>

void calc_sum(int *,int *,int *);

int main()
{
    int a,b,sum=0;
    printf("Enter the values of a and b:\n");
    scanf("%d %d",&a,&b);

    calc_sum(&a,&b,&sum);

    printf("Sum: %d\n",sum);

    return 0;
}

void calc_sum(int *a, int *b, int *sum){

    *sum = *a + *b;

}
