#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int Max = arr[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > Max) Max = arr[i][j];
        }
    }
    cout<<Max;
}