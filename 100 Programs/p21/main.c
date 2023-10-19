#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    (a<b)?printf("%d is biggest\n",b):printf("%d is biggest\n",a);
    return 0;
}
