#include<stdio.h>
int main(){
    int a = 10;
    int* ptr = &a;
    // printf("%p\n",ptr);
    // // printf("%d\n",*ptr);
    // // printf("%d\n",&ptr);
    // printf("%p",&a);
    int** ptr2 = &ptr;
    printf("%p",*ptr2);
    printf("\n%d",**ptr2);
}