#include <stdio.h>

int main()
{
    int start = 0;
    char c = 0;
    int end = 255;
    while(end>=0){
        printf("%d -> %c\n",start,c);
        start++;
        c++;
        end--;
    }

    return 0;
}
