#include <stdio.h>

void print();

int main()
{
    print();
    print();
    print();
    return 0;
}

void print(){
    static int a = 5;
    printf("a: %d\n",a);
    a++;
}
