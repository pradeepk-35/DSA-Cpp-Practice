#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> arr = {1,5,6,2,3,4};
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        // int swaps = 0;
        bool flag = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                // swaps++;
                flag = true;
            }
            
        }
        // if(swaps == 0)
        //     break;

        if(flag == false){
            break;
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}