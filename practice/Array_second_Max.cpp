#include<iostream>
using namespace std;
#include<climits>
int main(){
    int arr[] = {10, 25, 7, 42, 18};
    int Max1 = INT_MIN;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(Max1 < arr[i]) Max1 = arr[i];
    }
    // cout<<Max1;
    int Max2 = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] == Max1){
            continue;
        }
        else{
            if(Max2 < arr[i]){
                Max2 = arr[i];
            }
        }
    }
    cout<<"Second largest element : "<<Max2;
}