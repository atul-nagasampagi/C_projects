#include <stdio.h>

int main()
{
    char str[30];
    int i=0;
    printf("Enter a String to convert to its lower case:\n");
    gets(str);

    while(str[i]){
        if((str[i]>=65 && str[i]<=91) || str[i] == 32){
            if(str[i] == ' '){
                printf("%c",str[i]);
            }else{
                printf("%c",str[i]+32);
            }
        }else{
            if(str[i] == ' '){
                printf("%c",str[i]);
            }else{
                printf("%c",str[i]);
            }
        }
        i++;
    }
    printf("\n");

    return 0;
}
