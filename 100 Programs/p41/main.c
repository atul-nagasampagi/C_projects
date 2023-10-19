#include <stdio.h>
#include <string.h>

int main()
{
    char str[30],revstr[30];
    int i,j=0,flag = 0;
    printf("Enter the string to reverse it:\n");
    gets(str);


    for(i=strlen(str)-1;i>=0;i--){
        revstr[j] = str[i];
        j++;
    }

    for(i=0;i<strlen(str);i++){
        if(revstr[i] != str[i]){
            flag = 1;
            break;
        }
    }


    if(flag == 0){
        printf("String is a palindrome\n");
    }else{
        printf("String is not a palindrome\n");
    }
    return 0;
}
