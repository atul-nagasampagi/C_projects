#include <stdio.h>

int main()
{
    int roll_no,sub1,sub2,sub3;
    printf("Enter Student Roll no:\n");
    scanf("%d",&roll_no);
    printf("Enter 3 sub marks:\n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);

    printf("Rollno: %d\n",roll_no);
    printf("Total: %d\n",sub1+sub2+sub3);
    printf("Average: %f\n",(float)(sub1+sub2+sub3)/3);

    return 0;
}
