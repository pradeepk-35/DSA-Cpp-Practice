#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int fun(vector<int> arr){
    
    // int Max = INT_MIN;
    // for(int i = 0; i < arr.size(); i++){
    //     if(Max < arr[i]){
    //         Max = arr[i];
    //     }
    // }
    // int n = Max;
    // cout<<n;
    int n = arr.size();
    int value = 0;
    for(int i = 0; i < arr.size(); i++){
        value += arr[i];
    }
    int tv = n * (n + 1) / 2;
    int ans = tv - value;
    // cout<<value;
    // cout<<tv;
    // cout<<n;
    return ans;
}
int main(){
    vector<int> arr = {0,1,2,3,4,5,7};
    int ans = fun(arr);
    cout<<abs(ans);
}