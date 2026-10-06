#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int* ptr;
    printf("Enter the number of values : ");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    printf("\nEnter the values : ");
    for(int i = 0; i < n; i++){
        scanf("%d",(ptr + i));
    }
    printf("\nYour enterd values are : ");
    for(int i = 0; i < n; i++){
        printf("%d ",*(ptr + i));
    }
    free(ptr);
    return 0;
}