#include <iostream>
using namespace std;
void Snake(int arr[][3], int row){
    if(row % 2 == 0){
        for(int i = 0; i < 3; i++)  cout<<arr[row][i];
    }
    else{
        for(int i = 2; i >= 0; i--) cout<<arr[row][i];
    }
    cout<<endl;

}
int main(){
    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // Snake(arr, 0);
    // Snake(arr, 1);
    // Snake(arr, 2);
    int rows = 3;
    for(int i = 0; i < 3; i++){
        Snake(arr,i);
    }
}