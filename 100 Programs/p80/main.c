#include <stdio.h>

int main() {
    char str[100];
    int i=0,count=0,word=1;

    printf("Enter a String to count the characters in each word of the string:\n");
    gets(str);

    while(str[i])
    {
        if(str[i]!=' '){
            count++;
        }else{
            if(count>0){
                printf("word %d: %d characters\n",word,count);
                count = 0;
                word++;
            }
        }
        i++;
    }
    if(count>0){
        printf("word %d: %d characters\n",word,count);
    }

    return 0;
}
