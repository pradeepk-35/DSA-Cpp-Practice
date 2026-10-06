#include <iostream>
#include <vector>
using namespace std;
void Transpose(vector<vector<int>>& arr){
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int>> ans;
    for(int j = 0; j < n; j++){
        vector<int> temp;
        for(int i = 0; i < m; i++){
            temp.push_back(arr[i][j]);
        }
        ans.push_back(temp);
    }
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<vector<int>> arr = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 4},
        {4, 4, 4, 4}
    };
    Transpose(arr);
}