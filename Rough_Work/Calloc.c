#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the no of values : ");
    scanf("%d",&n);
    int* ptr = calloc(n, sizeof(int));
    printf("Enter the values : ");
    for(int i = 0; i < n; i++){
        scanf("%d",(ptr+i));
    }
    printf("Enterd values are : ");
    for(int i = 0; i < n; i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}