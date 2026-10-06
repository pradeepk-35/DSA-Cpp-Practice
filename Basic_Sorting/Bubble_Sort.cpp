#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count = 0;
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int swaps = 0;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                count++;
            }
        }
        if(swaps == 0){
            break;
        }
        
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl<<count;
}