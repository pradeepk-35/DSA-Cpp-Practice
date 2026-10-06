#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void wave(vector<int>& arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    for(int i = 0; i < n - 1; i += 2){
        if(arr[i] <= arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(int ele : arr)
    {
        cout<<ele<<" ";
    }
}
int main(){
    // vector<int> arr = {2, 4, 7, 8, 9, 10};
    vector<int> arr = {1,2,3,4,5};
    wave(arr);
}