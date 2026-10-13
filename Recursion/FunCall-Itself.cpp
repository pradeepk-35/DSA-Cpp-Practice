#include<iostream>
using namespace std;
void Pradeep(int n){
    if(n == 0) return;
    cout<<"Hello I am pradeep"<<endl;
    Pradeep(n - 1);
}
int main(){
    Pradeep(5);
}