#include <iostream>
using namespace std;
int main(){
    int arr[][3] = {{10,20,30},{40,50,60},{70,80,90}};
    int sum1, sum2, sum3;
    sum1 = 0;
    sum2 = 0;
    sum3 = 0;
    for(int i = 0; i <= 0; i++){
        for(int j = 0; j < 3; j++){
            sum1 += arr[i][j];
        }
    }
    // cout<<sum1;
    for(int i = 1; i <= 1; i++){
        for(int j = 0; j < 3; j++){
            sum2 += arr[i][j];
        }
    }
    // cout<<sum2;
    for(int i = 2; i <= 2; i++){
        for(int j = 0; j < 3; j++){
            sum3 += arr[i][j];
        }
    }
    // cout<<sum3;

    if(sum1 >= sum2 && sum1 >= sum3)  cout<<sum1;
    else if(sum2 >= sum1 && sum2 >= sum3)   cout<<sum2;
    else cout<<sum3;
}