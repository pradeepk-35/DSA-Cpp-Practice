#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Merge(vector<int>& a,vector<int>& b){
    vector<int> c;
    for(int i = 0; i < a.size(); i++){
        c.push_back(a[i]);
    }
    for(int i = 0; i < b.size(); i++){
        c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    for(int ele : c){
        cout<<ele<<" ";
    }
}
int main(){
    vector<int> a = {10,20,40,70,90};
    vector<int> b = {30,50,60,80};
    Merge(a,b);
}