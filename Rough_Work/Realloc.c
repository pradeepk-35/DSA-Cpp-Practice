#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the no of values : ");
    scanf("%d",&n);
    int* ptr = calloc(n, sizeof(int));
    printf("Enter the values : ");
    for(int i = 0; i < n; i++){
        scanf("%d",(ptr + i));
    }
    printf("Enter the updated value : ");
    scanf("%d",&n);
    int* ptr1 = realloc(ptr, n * sizeof(int));
    printf("Enter the new values : ");
    for(int i = 0; i < n; i++){
        scanf("%d",(ptr1 + i));
    }
    printf("Your new enterd values are : ");
    for(int i = 0; i < n; i++){
        printf("%d ",*(ptr1 + i));
    }
    printf("\nprevious adress = %d\n new adress = %d",ptr,ptr1);
    free(ptr1);
    free(ptr);
    return 0;
}