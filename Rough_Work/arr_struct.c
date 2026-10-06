#include<stdio.h>
struct  student
{
    int roll;
    char name[20];
    float marks;
};

int main(){
    struct student s[2];
    for(int i = 0; i < 2; i++){
        printf("Enter the Roll No of student %d: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter the Name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter the Marks of student %d: ",i+1);
        scanf("%f",&s[i].marks);
    }
    for(int i = 0; i < 2; i++){
        printf("---Student Details___\n");
        printf("Roll No of Student %d : %d - \n",i+1,s[i].roll);
        printf("Name  of Student %d : %s - \n",i+1,s[i].name);
        printf("Marks of Student %d : %f - \n",i+1, s[i].marks);
    }
    
    return 0;



}

