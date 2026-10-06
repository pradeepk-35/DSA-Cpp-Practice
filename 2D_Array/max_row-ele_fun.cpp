#include <iostream>
using namespace std;
int arrsum(int arr[][4], int row){
    int sum = 0;
    
        for(int j = 0; j < 4; j++){
            sum += arr[row][j];
        }
    return sum;
}
int main(){
    int arr[][4] = {{1,2,3,400},{5,6,7,8},{10,20,30,40}};
    int sum1 = arrsum(arr, 0);
    int sum2 = arrsum(arr, 1);
    int sum3 = arrsum(arr, 2);
    
    if(sum1 >= sum2 && sum1 >= sum3)  cout<<"Row - 1"<<"  "<<sum1;
    else if(sum2 >= sum1 && sum2 >= sum3)   cout<<"Row - 2"<<"  "<<sum2;
    else cout<<"Row - 3"<<"  "<<sum3;
    return 0;
}
