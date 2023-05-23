#include <stdio.h>
#include <stdlib.h>

FILE *fp;
FILE *tfp;

struct Student{
    char name[50];
    char dept[10];
    int age;
    int id;
    int rollno;
};

void init(){
    int choice;
    enum options{
        add_student=1,disp_student,update_record,delete_record,terminate_program
    };

    while(1){
        printf("1. Add Students\n2. Display Students\n3. Update Student Record\n4. Delete Student Record\n5. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        struct Student s1;

        switch (choice) {
        case add_student:
            add_students(&s1);
            break;
        case disp_student:
            disp_students(&s1);
            break;
        case update_record:
            update_student(&s1);
            break;
        case delete_record:
            delete_student(&s1);
            break;
        case terminate_program:
            exit(0);
        }
    }
}



void add_students(struct Student *s1){

    fp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt","a+");

    int count=0,size;
    while(fgets(s1,79,fp)!=NULL){
        count++;
    }

    if(fp == NULL){
        puts("Cannot open file");
        exit(1);
    }

    while(fscanf(fp,"%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF){
        count++;
    }

    printf("Number of Student Record: %d\n",count+1);

    if(count<=100){
        s1->id = count+1000;
        fprintf(fp,"%d\t\t",s1->id);

        printf("Enter student name:\n");
        scanf("%s",s1->name);
        fprintf(fp,"%s",s1->name);

        printf("Enter student age:\n");
        scanf("%d", &s1->age);
        fprintf(fp,"\t%d\t",s1->age);

        printf("Enter student Roll No.:\n");
        scanf("%d", &s1->rollno);
        fprintf(fp,"%d\t\t",s1->rollno);

        printf("Enter student Department:\n");
        scanf("%s",s1->dept);
        fprintf(fp,"%s\n",s1->dept);
    }

    fseek(fp,0,SEEK_END);
    size = ftell(fp);

    printf("Memory consumed by add_students function: %d bytes\n",sizeof(count)+sizeof(size)+sizeof(fp)+sizeof(s1));
    printf("File Size: %d bytes\n",size);

    fclose(fp);

}

void disp_students(struct Student *s1){

    fp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt","r");

    printf("ID\t\tName\tAge\tRoll No.\tDepartment\n");
    printf("--------------------------------------------------------------------\n");
    while(fgets(s1,79,fp)!=NULL){
        puts(s1);
    }
    printf("Memory consumed by disp_students function: %d bytes\n",sizeof(fp)+sizeof(s1));
    fclose(fp);
}

void update_student(struct Student *s1){

    fp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt", "r+");
    tfp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/file.txt","w+");


    int id,flag=0;
    printf("Enter the ID of the student to be Updated:\n");
    scanf("%d", &id);

    while (fscanf(fp, "%d%s%d%d%s", &s1->id, s1->name, &s1->age, &s1->rollno, s1->dept) != EOF)
    {
        if(s1->id == id){
            flag = 1;

            enum options{
                modify_name=1,modify_age,modify_rollno,modify_dept
            };

            int choice;
            printf("Enter\n1. Modify Name\n2. Modify Age\n3. Modify Roll No.\n4.Modify Department\n");
            scanf("%d",&choice);
            switch(choice){
            case modify_name:
                printf("Enter new name:\n");
                scanf("%s",s1->name);
                break;
            case modify_age:
                printf("Enter new age:\n");
                scanf("%d",&s1->age);
                break;
            case modify_rollno:
                printf("Enter new rollno:\n");
                scanf("%d",&s1->rollno);
                break;
            case modify_dept:
                printf("Enter new dept:\n");
                scanf("%s",s1->dept);
                break;

            }
        }
        fprintf(tfp,"%d\t\t%s\t%d\t%d\t%s\n",s1->id,s1->name,s1->age,s1->rollno,s1->dept);
    }

    if(flag == 0){
        printf("ID not found\n");
    }else{
        printf("New student details updated\n");
    }

    fclose(tfp);
    fclose(fp);

    remove("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt");
    rename("C:/PthinkS_Training/Spike_Task/Student_Management_System/file.txt","C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt");

    printf("Memory consumed by update_students function: %d bytes\n",sizeof(id)+sizeof(fp)+sizeof(tfp)+sizeof(s1));

}

void delete_student(struct Student *s1){

    fp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt", "r");
    tfp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/file.txt", "w");


    int id,count = 0,size,flag=0;
    printf("Enter the ID of the student to be deleted:\n");
    scanf("%d", &id);


    while(fscanf(fp, "%d %s %d %d %s",&s1->id,s1->name,&s1->age,&s1->rollno,s1->dept)!=EOF) {
        if(s1->id != id){
            fprintf(tfp,"%d\t\t%s\t%d\t%d\t%s\n",s1->id,s1->name,s1->age,s1->rollno,s1->dept);
        }else{
            flag = 1;
        }
    }

    if(flag == 0){
        printf("ID not found\n");
    }else{
        printf("Student details deleted successfully\n");
    }

    fseek(fp,0,SEEK_END);
    size = ftell(fp);

    fclose(fp);
    fclose(tfp);

    remove("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt");
    rename("C:/PthinkS_Training/Spike_Task/Student_Management_System/file.txt","C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt");


    printf("Memory consumed by delete_students function: %d bytes\n",sizeof(id)+sizeof(size)+sizeof(count)+sizeof(fp)+sizeof(tfp)+sizeof(s1));
    printf("File Size: %d bytes\n",size);

}
