#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 25, 7, 42, 18};
    int target = 42;
    bool flag = true;
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        if(arr[i] == target) {
            cout<<"Found"<<endl;
            cout<<i;
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"Not found"<<endl<<"-1";
    }
}