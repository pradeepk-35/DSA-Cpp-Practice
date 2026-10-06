#include<stdio.h>
int main(){
    char name[30];
    printf("Enter the name ");
    fgets(name, sizeof(name), stdin);
    int count = 0, i = 0;
    while(name[i] != '\0'){
        count += 1;
        i++;
    }
    // puts(count);
    printf("Length = %d",count - 1);//because fgets produces extra \n which increases it length
}