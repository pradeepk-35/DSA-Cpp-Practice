#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,15,22,7,8,13,40};
    int even = 0, odd = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0) even += 1;
        else odd += 1;
    }
    cout<<"even : "<<even<<endl<<"odd : "<<odd;
}