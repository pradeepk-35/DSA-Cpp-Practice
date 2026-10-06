#include<stdio.h>
struct student{
        char name[30];
        int roll;
        float marks;
    };
int main(){
    // struct student s1, s2;
    struct student s1 = {"Nithin", 58, 98.8};
    struct student s2 = {"Dhanush", 18, 99.8};
    // printf("%d",s1.roll);
    // printf("\n%s",s2.name);
    if(s1.name > s2.name) printf("%d",s1.roll);
    else printf("%s",s2.roll);
    return 0;
}