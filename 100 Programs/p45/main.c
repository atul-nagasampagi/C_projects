#include <stdio.h>
#include <stdlib.h>

void calc_str_len(char *);

int main()
{
    char str[30];
    printf("Enter a string to calculate its length:\n");
    gets(str);

    calc_str_len(str);
    return 0;
}

void calc_str_len(char *s){
    int length = 0;
    while(*s){
        length++;
        s++;
    }

    printf("Length: %d\n",length);
}
