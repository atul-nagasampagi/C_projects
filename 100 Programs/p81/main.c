#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void string_comp(char *,char *);

int main()
{
    char string1[30],string2[30];
    printf("Enter the string 1:\n");
    gets(string1);

    printf("Enter the string 2:\n");
    gets(string2);

    char *str1,*str2;

    str1 = malloc(strlen(string1));
    str2 = malloc(strlen(string2));

    strcpy(str1,string1);
    strcpy(str2,string2);

    string_comp(str1,str2);

    free(str1);
    free(str2);

    return 0;
}

void string_comp(char *string1, char *string2){
    int flag = 0;

    if(strlen(string1)==strlen(string2)){
        while(*string1){
            if(*string1!=*string2){
                flag = 1;
                break;
            }else{
                string1++;
                string2++;
            }
        }
    }else{
        flag = 1;
    }

    if(flag == 0){
        printf("Two Strings are equal\n");
    }else{
        printf("Two Strings are not equal\n");
    }
}
