#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <common.cpp>

FILE *fp;

void init(){

    fp = fopen("C:/PthinkS_Training/Spike_Task/Student_Management_System/Students_Record.txt","r+");
    int choice;


    while(1){
        printf("1. Add Students\n2. Display Students\n3. Update Student Record\n4. Delete Student Record\n5. Exit\n");
        printf("Enter your choice:\n");
        scanf("%d",&choice);

        struct Student s1;

        switch (choice) {
        case add_student:
            add_students(&s1,fp);
            break;
        case disp_student:
            disp_students(&s1,fp);
            break;
        case update_record:
            update_student(&s1,fp);
            break;
        case delete_record:
            delete_student(&s1,fp);
            break;
        case terminate_program:
            fclose(fp);
            exit(0);
        }
    }
}





