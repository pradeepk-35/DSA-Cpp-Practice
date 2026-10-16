#include <iostream>
using namespace std;
int count = 0;
void Print(int n){
    if(n == 0) return;
    count += n;
    Print(n - 1);
    return;

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n; 
    Print(n);
    cout<<count;
}