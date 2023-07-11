#include <stdio.h>

void pointers_input(char *);
void function_input(char []);

int main()
{
    char str[30];
    char *string = str;

    pointers_input(string);
    function_input(string);

    return 0;
}

void pointers_input(char *string){
    printf("Enter the string(using pointers):\n");
    gets(string);

    printf("%s\n",string);
}

void function_input(char string[]){
    printf("Enter the string(using function):\n");
    gets(string);

    printf("%s\n",string);
}
