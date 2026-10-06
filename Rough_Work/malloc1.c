#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr = (int*)malloc(2 * sizeof(int));
    ptr[0] = 10;
    ptr[1] = 20;
    ptr = (int*)realloc(ptr, 3*sizeof(int));
    ptr[2] = 50;
    printf("%d %d %d",ptr[0],ptr[1],ptr[2]);
    return 0;
}