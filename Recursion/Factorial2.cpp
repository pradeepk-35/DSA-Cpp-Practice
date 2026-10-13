#include <iostream>
using namespace std;
int fact = 1;
int Factorial(int n){
    if(n == 1 || n == 0) return 1;
    int ans = n * Factorial(n - 1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    int result = Factorial(n);
    cout<<result;
}