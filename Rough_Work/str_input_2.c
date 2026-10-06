#include<stdio.h>
int main(){
    char name[3];
    puts("Enter your name : ");
    // gets(name);
    // fgets(name, sizeof(name),stdin);
    scanf("%s",name);
    puts("Your name is ");
    puts(name);
    return 0;
}