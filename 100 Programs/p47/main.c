#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_comp(char *,char *);

int main()
{
    char str1[30],str2[30];
    char *s1,*s2;
    printf("Enter str1:\n");
    gets(str1);

    s1 = malloc(strlen(str1));

    printf("Enter str2:\n");
    gets(str2);

    s2 = malloc(strlen(str2));

    strcpy(s1,str1);
    strcpy(s2,str2);

    str_comp(s1,s2);

    free(s1);
    free(s2);

    return 0;
}

void str_comp(char *str1, char *str2){
    int flag = 0;
    if(strlen(str1) == strlen(str2)){
        while(*str1){
            if(*str1 != *str2){
                flag = 1;
                break;
            }else{
                str1++;
                str2++;
                continue;
            }
        }
    }else{
        flag = 1;
    }

    if(flag){
        printf("Strings are not equal\n");
    }else{
        printf("Strings are equal\n");
    }
}
