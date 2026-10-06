#include <iostream>
#include <iterator>
using namespace std;
int main(){
    int marks[] = {99,90,60,50,15};
    // cout<<marks[3]<<endl;
    // marks[3] = 25;
    // cout<<marks[3]<<endl;
    // cin>>marks[1];
    // cout<<marks[1]<<endl;
    cout<<sizeof(marks)<<endl;
    cout<<sizeof(marks[0])<<endl;
    cout<<(sizeof(marks) / sizeof(marks[0]))<<endl;
    

}