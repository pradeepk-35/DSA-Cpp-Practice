#include<stdio.h>
#include<string.h>
typedef struct student
{
    int age;
    int marks;
    char name[20];
}s;
int main(){
    s s1;
    s1.age = 19;
    s1.marks = 20;
    // s1.name = "Pradeep";
    strcpy(s1.name,"Pradeep");
    printf("%d\n%d\n%s",s1.age,s1.marks,s1.name);
    return 0;
}
