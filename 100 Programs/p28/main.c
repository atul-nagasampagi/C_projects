#include <stdio.h>

void print_string(char *);

int main()
{
    char str[30];
    printf("Enter a String:\n");
    gets(str);

    print_string(str);

    return 0;
}

void print_string(char *str){
    while(*str){
        printf("%c",*str);
        str++;
    }
    printf("\n");
}
