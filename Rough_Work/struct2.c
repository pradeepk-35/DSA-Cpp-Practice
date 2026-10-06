#include<stdio.h>
struct  employee{
    char name[30];
    int age;
    long long int salary;
    char job[30];
};
int main(){
    struct employee e = {"PRADEEP",25, 200000, "SWE"};
    printf("NAME : %s\nAGE : %d\nJOB : %s\nSALARY : %lld",e.name,e.age,e.job,e.salary);
    return 0;
}
