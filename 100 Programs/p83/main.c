#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[100],char1,char2;
    int i=0;

    printf("Enter a String to print first 2 characters of each word in a string:\n");
    gets(str);

    while(str[i])
    {
        if(str[i]!=' '){
            char1 = str[i];
            char2 = str[i+1];

            printf("%c%c\n",char1,char2);
            while(str[i] != ' '){
                if(str[i] == '\0'){
                    exit(0);
                }
                else{
                    i++;
                }
            }
        }
        i++;
    }

    return 0;
}
