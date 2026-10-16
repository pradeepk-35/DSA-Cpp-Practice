#include<iostream>
using namespace std;
int n;
void Print(int x){
    if(x > n) return;
    cout<<x<<" ";
    Print(x + 1);
}
int main(){
    cout<<"Enter the Number : ";
    cin>>n;
    Print(1);
}
