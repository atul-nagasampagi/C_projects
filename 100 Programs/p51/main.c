#include<stdio.h>

long factorial(int);

int main()
{
    int i, n, c;

    printf("Enter the number of rows:\n");
    scanf("%d",&n);

    int sp=n-1;

    for(i=0;i<n;i++)
    {
        for(c=sp;c>=0;c--){
            printf(" ");
        }
        sp--;
        for(c=0;c<=i;c++){
            printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
        }
        printf("\n");
    }
    return 0;
}

long factorial(int n)
{
    int c;
    long result = 1;

    for(c=1;c<=n;c++){
        result = result*c;
    }
    return result;
}
