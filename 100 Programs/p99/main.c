#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];

    int i;

    printf("Enter the string to add trailing spaces:\n");
    gets(str);

    for(i=0;i<strlen(str);i++){
        if(str[i] == ' '){
            continue;
        }else{
            printf("%c ",str[i]);
        }
    }
    printf("\n");

    return 0;
}
