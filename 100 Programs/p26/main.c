#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character to convert its case:\n");
    scanf("%c",&c);

        if(c>=65 && c<=91){
            printf("%c\n",c+32);
        }else{
            printf("%c\n",c-32);
        }

    return 0;
}
