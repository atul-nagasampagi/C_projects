#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number to print its mathematical table:\n");
    scanf("%d",&n);
    printf("\n");
    for(i=1;i<11;i++){
        printf("%d\n",n*i);
    }
    return 0;
}
