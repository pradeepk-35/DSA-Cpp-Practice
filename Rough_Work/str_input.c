#include<stdio.h>
int main(){
    char name[30];
    printf("Enter your name : ");
    // scanf("%s",name);
    gets(name);
    printf("Your Name is %s",name);
    return 0;
}