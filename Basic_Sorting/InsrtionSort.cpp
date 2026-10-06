#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minimum(int arr[]){
    int Min = INT_MAX;
    int n = 5;
    
    
    for(int i = 0; i < n; i++){
        if(arr[i] < Min){
            Min = arr[i];
            
        }
    }
    return ;
}

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int arr[] = {10, 40, 50, 20, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n - 1; i++){
        int p = minimum(arr);
        Swap(arr[i],arr[p - 1]);
    }
    for(int ele : arr){
        cout<<ele<<" ";
    }
    // int p = minimum(arr);
    // cout<<p;
    
}