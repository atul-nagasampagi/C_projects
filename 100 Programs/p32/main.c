#include <stdio.h>

int main()
{
    int cap_letter=0,small_letter=0,spl_char=0,i=0;
    char str[30];
    printf("Enter a string to count number of Capital letters, small letters and special letters:\n");
    gets(str);

    while(str[i]){
        if(str[i]>=65 && str[i]<=91){
            cap_letter++;
            i++;
        }else if(str[i]>=97 && str[i]<=122){
            small_letter++;
            i++;
        }else{
            spl_char++;
            i++;
        }
    }

    printf("Number of Capital letters: %d\nNumber of small letters : %d\nNumber of Special Characters: %d\n",cap_letter,small_letter,spl_char);
    return 0;
}
