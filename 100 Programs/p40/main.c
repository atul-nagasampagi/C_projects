#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    int i;
    printf("Enter the string to reverse it:\n");
    gets(str);

    for(i=strlen(str);i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
