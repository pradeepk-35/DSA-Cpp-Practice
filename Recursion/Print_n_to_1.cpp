#include<iostream>
using namespace std;
void Number(int n){
    if(n == 0) return;
    cout<<n<<" ";
    Number(n - 1);
}
int main(){
    int n;
    cout<<"Enter the number";
    cin>>n;
    Number(n);
}