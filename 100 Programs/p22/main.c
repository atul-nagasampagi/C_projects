#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter a,b,c and d:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    (a>b && a>c && a>d)?printf("%d is biggest\n",a):(b>a && b>c && b>d)?printf("%d is biggest\n",b):(c>a && c>b && c>d)?printf("%d is biggest\n",c):printf("%d is biggest\n",d);
    return 0;
}
