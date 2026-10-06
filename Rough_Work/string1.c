#include<stdio.h>
#include<string.h>
int main(){
    char name[] = "pradeep";
    size_t n = strlen(name);
    // printf("%s",name);
    // printf("\nsize of name is %zu",sizeof(name));
    // printf("\nlength of the name is %zu",strlen(name));

    // printf("%c",name);
    for(int i = 0; i < n; i++){
        printf("%c",name[i]);
    }
    return 0;
}
