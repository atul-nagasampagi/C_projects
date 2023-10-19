#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_comp(char *,char *);

int main()
{
    char str1[30],str2[30];
    char *string1 = NULL,*string2 = NULL;

    printf("Enter String1:\n");
    gets(str1);

    printf("Enter String2:\n");
    gets(str2);

    string1 = malloc(strlen(str1));
    string2 = malloc(strlen(str2));

    strcpy(string1,str1);
    strcpy(string2,str2);

    string_comp(string1,string2);

    free(string1);
    free(string2);

    return 0;
}

void string_comp(char *string1, char *string2){
    if(strcmp(string1,string2) == 1){
        printf("String 1 is Biggest\n");
    }else if(strcmp(string1,string2) == -1){
        printf("String2 is Biggest\n");
    }else{
        printf("Both the strings are equal\n");
    }
}
