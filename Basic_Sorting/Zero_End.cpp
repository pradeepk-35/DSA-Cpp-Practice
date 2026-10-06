#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {9, -2, 0, 0, -4, 6, 0, 7, 0};
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int swaps = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] == 0){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1 ] = temp;
                swaps++;
            }
        }
        if(swaps == 0){
            
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}