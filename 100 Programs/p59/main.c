#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50],*s1;
    int length = 0;
    printf("Enter string to calculate its length:\n");
    gets(str1);

    s1 = malloc(strlen(str1));

    strcpy(s1,str1);

    while(*s1){
        length++;
        s1++;
    }

    printf("Length: %d\n",length);

    free(s1);

    return 0;
}
