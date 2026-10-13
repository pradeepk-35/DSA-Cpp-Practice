#include <iostream>
using namespace std;
int fact = 1;
int Factorial(int n){
    if(n == 1) return fact;
    fact = fact * n;
    Factorial(n - 1);
}
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    if(n == 0){
        cout<<"1";
    }
    else {
        int result = Factorial(n);
        cout<<result;
    }
}