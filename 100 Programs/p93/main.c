#include <stdio.h>

int main()
{
    FILE *fp;
    char s[80];
    int i=0;

    fp = fopen("C:/PthinkS_Training/100 Programs/p93/file.txt","r+");

    if(fp == NULL){
        puts("Cannot open file");
        exit(1);
    }
    printf("Enter a string in lower case:\n");
    gets(s);

    while(s[i]){

        if(s[i]<97 || s[i]>122){
            printf("Enter a valid characters\n");
            exit(1);
        }
        if((s[i]>=97 && s[i]<=122) || s[i] == 32){
            if(s[i] == ' '){
                fprintf(fp,"%c",s[i]);
            }else{
                fprintf(fp,"%c",s[i]-32);
            }
        }else{
            if(s[i] == ' '){
                fprintf(fp,"%c",s[i]);
            }else{
                fprintf(fp,"%c",s[i]);
            }
        }
        i++;
    }
    printf("\n");

    rewind(fp);

    while(fgets(s,79,fp)!=NULL){
        puts(s);
    }

    return 0;
}
