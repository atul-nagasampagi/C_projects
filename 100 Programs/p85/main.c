#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_reverse(char *);

int main()
{
    char string[30];
    char *str;
    printf("Enter a string to reverse it:\n");
    gets(string);

    str = malloc(strlen(string));

    strcpy(str,string);

    string_reverse(str);

    free(str);

    return 0;
}

void string_reverse(char *string1){
    int i;
    for(i=strlen(string1)-1;i>=0;i--){
        printf("%c",string1[i]);
    }

}
