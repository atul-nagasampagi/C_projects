#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char s[80];

    fp = fopen("C:/PthinkS_Training/100 Programs/p92/file.txt","r+");

    if(fp == NULL){
        puts("Cannot open file");
        exit(1);
    }
    printf("Enter a few lines of text:\n");
    while(strlen(gets(s))>0){
        fputs(s,fp);
        fputs("\n",fp);
    }

    rewind(fp);

    while(fgets(s,79,fp)!=NULL){
        puts(s);
    }

    fclose(fp);

    return 0;
}
