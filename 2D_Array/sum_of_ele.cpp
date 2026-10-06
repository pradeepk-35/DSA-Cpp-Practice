#include <iostream>
using namespace std;
int main(){
    int arr[][4] = {{1,2,3},{4,5,6},{7,8,9}};
    int Sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            Sum += arr[i][j];
        }
    }
    cout<<"The sum of the array elements is : "<<Sum;
}