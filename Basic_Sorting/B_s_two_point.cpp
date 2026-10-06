#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr = {9, -2, 0, -4, 6, 0, 7, 0};
    int n = arr.size();
    int i = 0, j = n - 2;
    int k = 0;
    while(i < j){
        if(arr[i] == 0) {
        
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i++;
        }
        if(arr[j] != 0) {
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}