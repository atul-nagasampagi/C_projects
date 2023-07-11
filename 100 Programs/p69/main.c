#include <stdio.h>

int main()
{
    FILE *fp1;
    FILE *fp2;
    char ch;

    fp1 = fopen("C:/PthinkS_Training/100 Programs/p69/file1.txt","r");
    fp2 = fopen("C:/PthinkS_Training/100 Programs/p69/file2.txt","w");

    if(fp1 == NULL){
        puts("cannot open file1\n");
        exit(1);
    }

    if(fp2 == NULL){
        puts("cannot open file2\n");
        exit(2);
    }

        ch = fgetc(fp1);
        while(ch != EOF)
        {
            fputc(ch,fp2);
            ch=fgetc(fp1);
        }


    fclose(fp1);
    fclose(fp2);

    return 0;
}
