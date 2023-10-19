#include <stdio.h>

int main(){
    FILE *file,*odd,*even;
    int number;

    file = fopen("C:/PthinkS_Training/100 Programs/p95/file.txt", "r");
    if (file == NULL) {
        printf("cannot open file\n");
        return 1;
    }

    odd = fopen("C:/PthinkS_Training/100 Programs/p95/odd.txt", "w");
    if (odd == NULL) {
        printf("cannot open odd file\n");
        return 1;
    }

    even = fopen("C:/PthinkS_Training/100 Programs/p95/even.txt", "w");
    if (even == NULL) {
        printf("cannot open even file\n");
        return 1;
    }

    while(fscanf(file,"%d ",&number) == 1) {
        if(number % 2 == 0){
            fprintf(even,"%d ",number);
        }else{
            fprintf(odd,"%d ",number);
        }
    }

    fclose(file);
    fclose(odd);
    fclose(even);

    return 0;
}
