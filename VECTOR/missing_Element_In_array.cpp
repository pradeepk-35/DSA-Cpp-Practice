#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int fun(vector<int> arr){
    
    int Max = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(Max < arr[i]){
            Max = arr[i];
        }
    }
    int n = Max;
    // cout<<n;
    int value = 0;
    for(int i = 0; i < arr.size(); i++){
        value += arr[i];
    }
    int tv = n*(n+1)/2;
    int ans = tv - value;
    // cout<<value;
    return ans;
}
int main(){
    vector<int> arr = {1,2,4,5};
    int ans = fun(arr);
    cout<<ans;
}