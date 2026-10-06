#include <stdio.h>
struct student{
    int roll;
    float marks;
    char name[30];
};
int main(){
    struct student s;
    printf("Student details.....\n");
    printf("Enter the roll no \nEnter the marks\nEnter the name\n");
    scanf("%d %f %s",&s.roll,&s.marks,s.name);
    printf("Name : %s\nRoll No : %d\nMarks : %.1f",s.name, s.roll, s.marks);
    return 0;
}