#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> ans;
    vector<vector<int>> arr = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int m = arr.size();
    int n = arr[0].size();
    for(int j = 0; j < n; j++){
        vector<int> temp;
        for(int i = m-1; i >= 0; i--){
            temp.push_back(arr[i][j]);
        }
        ans.push_back(temp);
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}