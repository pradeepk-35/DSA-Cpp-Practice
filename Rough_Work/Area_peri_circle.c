#include <stdio.h>
int main(){
    #define pi 3.1415
    int r;
    printf("Enter the radius : ");
    scanf("%d",&r);
    float area = pi * r * r;
    float peri = 2 * pi * r;
    printf("area = %.3f  perimeter = %.3f",area,peri);
    return 0;
}
