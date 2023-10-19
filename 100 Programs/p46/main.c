#include <stdio.h>

int main()
{
    char str[30];
    int i=0,words=0,chars=0,alpha=0,vow=0,con=0,digit=0;
    printf("Enter a string to count the number of words, characters, alphabets, vowels, consonants and digit:\n");
    gets(str);

    while(str[i]){
        //alphabets and characters
        if((str[i]>=65 && str[i]<=91) || (str[i]>=97 && str[i]<=122) || str[i] == ' '){
            chars++;
            if(str[i] != ' '){
                alpha++;
            }
        }
        //vowels
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'){
            vow++;

        }
        //consonents
        if((str[i] != 'a'&&str[i] != 'e'&&str[i] != 'i'&&str[i] != 'o'&&str[i] != 'u') && (str[i] != 'A'&&str[i] != 'E'&&str[i] != 'I'&&str[i] != 'O'&&str[i] != 'U') && !(str[i]>=48 && str[i]<=57) &&(str[i]!= ' ')){
            con++;

        }
        //digits
        if(str[i]>=48 && str[i]<=57){
            digit++;
            chars++;

        }
        //words
        if(str[i] == ' '){
            words++;
        }
        i++;
    }
    words++;

    printf("Words: %d\nCharacters: %d\nAlphabets: %d\nVowels: %d\nConsonents: %d\nDigits: %d\n",words,chars,alpha,vow,con,digit);


    return 0;
}
