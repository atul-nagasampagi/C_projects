#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter the string to print each words in new line:\n");
    gets(str);

    int i=0;

    while(str[i]){
        while(str[i]!=' '){
            if(str[i]!='\0'){
                printf("%c",str[i]);
                i++;
            }else{
                printf("\n");
                return 1;
            }
        }
        i++;
        printf("\n");
    }


    return 0;
}
