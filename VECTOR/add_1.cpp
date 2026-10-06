#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> arr = {9,9,9};
    vector<int> a(1);
    int n = arr.size();
    bool All_Nine = true;
    for(int i = n - 1; i >= 0; i--){
        if(arr[i] != 9){
            All_Nine = false;
            arr[i] += 1;
            break;
        }
        else{
            arr[i] = 0;
            // arr[i - 1] += 1;
        }
    }
    if(All_Nine == false)
    for(int ele : arr){
        cout<<ele<<" ";
    }
    if(All_Nine){
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0){
                a[0] = 1;
                a.push_back(arr[i]);
            }
        }
        for(int ele : a){
            cout<<ele<<" ";
        }
    }
    
}