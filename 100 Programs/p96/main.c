#include <stdio.h>
#include <stdlib.h>

void convert(char *);

int main()
{
    char str[50];
    printf("Enter the string:\n");
    gets(str);

    convert(str);

    printf("%s\n",str);

    return 0;
}

void convert(char *string){
    if(*string>=97 && *string<=122){
        *string = *string - 32;
    }
    while(*string){
        while(*string != ' '){
            if(*string){
                string++;
            }else{
                return;
            }
        }
        string++;
        if(*string>=97 && *string<=122){
            *string = *string - 32;
        }
        string++;
    }
}
