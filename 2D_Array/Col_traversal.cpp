#include<iostream>
using namespace std;
int Max(int arr[][4], int row){
    // int arr[][3] = {{10,20,30},{40,50,60},{70,80,90}};
    for(int j = 0; j < 3; j++){
        for(int i = 0; i < 3; i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int row1 = Max(arr,0);
    int row2 = Max(arr,1);
    int row3 = Max(arr,2);
    int row4 = Max(arr,3);
    // cout<<row1<<row2<<row3<<row4;
    if(row1 < row2 && row1 < row3 && row1 < row4) cout<<row1;
    else if(row2 < row1 && row2 < row3 && row2 < row4) cout<<row2;
    else if(row3 < row1 && row3 < row2 && row3 < row4) cout<<row3;
    else cout<<row4;
}
