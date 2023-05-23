#include <stdio.h>

int main()
{
    int n,res = 0,i=1;
    printf("Enter an integer number:\n");
    scanf("%d",&n);

    while(n>0){
        res =res+(n%8)*i;
        n =n/8;
        i =i*10;
    }
    printf("%d",res);

    return 0;
}
