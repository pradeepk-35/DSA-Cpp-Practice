#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(int);
    for(int i = 0; i < n; i++){
        count += arr[i];
    }
    cout<<count;
    return 0;
}