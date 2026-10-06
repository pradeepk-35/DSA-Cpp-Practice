#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> arr = {0,1,2,3,5};
    vector<bool> flag(arr.size()+1,false);
    // for(int i = 0; i < flag.size(); i++){
    //     flag[i] = false;
    //     // cout<<flag[i]<<" ";
    // }
    for(int i = 0; i < arr.size(); i++){
        // arr[i] = flag[true];
        flag[arr[i]] = true;
    }
    for(int i = 0; i < flag.size(); i++){
        if(flag[i] == false){
            cout<<i;
        }
    }
    

}