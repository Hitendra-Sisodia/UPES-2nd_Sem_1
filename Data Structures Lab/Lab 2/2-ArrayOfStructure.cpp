#include<stdio.h>
struct student                          //struct name
{
    char firstname[30];             //struct defination
    char lastname[30];
    int age;
    char vacStatus;
};
int main()
{
    struct student stu_record[5];        //structure of array
    struct student *ptr;                 //pointer of struct
    ptr=stu_record;                      //refrence of array in ptr pointer
    for(int i=0;i<5;i++){                //loop for input
        printf("%dith student\n",i+1);
        scanf("%s",&ptr -> firstname);
        scanf("%s",&ptr -> lastname);
        scanf("%d",&ptr -> age);
        scanf("%c",&ptr -> vacStatus);
        ptr++;
    }
    //reset pointer back to the starting
    ptr=stu_record;
    for(int i=0;i<5;i++){                  //loop for output
        printf("%dith student\n",i+1);
        printf("%s\n",ptr -> firstname);
        printf("%s\n",ptr -> lastname);
        printf("%d\n",ptr -> age);
        printf("%c\n",ptr -> vacStatus);
        ptr++;
    }
}


