#include <stdio.h>

int main()
{
    char c;
    printf("Enter a Upper case character to convert to its lower case character:\n");
    scanf("%c",&c);
    if(c>=65 && c<=91){
        printf("%c\n",c+32);
    }else{
        printf("%c\n",c);
    }
    return 0;
}

