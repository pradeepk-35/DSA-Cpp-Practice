#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr) / sizeof(int);
    // // cout<<n;
    // for(int i = n - 1; i >= 0; i--){
    //     cout<<arr[i]<<"\t";
    // }

    int i = 0;
    int j = n - 1;
    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--; 
    }
    for(int ele : arr){
        cout<<ele<<"\t";
    }
}