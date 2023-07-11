#include <stdio.h>

int main()
{
    int i,j;
    for(i=2;i<=100;i++){
        int prime = 1;
        for(j=2;j<=i/2;j++){
            if(i%j == 0){
                prime = 0;
                break;
            }

        }
        if(prime == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
