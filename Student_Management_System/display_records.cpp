#include <stdio.h>

void disp_students(struct Student *s1,FILE *fp){

    rewind(fp);

    printf("ID\t\tName\tAge\tRoll No.\tDepartment\n");
    printf("--------------------------------------------------------------------\n");
    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        printf("%d\t\t%s\t%d\t%d\t\t%s\n",s1->id, s1->name, s1->age, s1->rollno, s1->dept);
    }
}
