#include <iostream>
#include <vector>
using namespace std;
void change(vector<int>& arr, int i, int j)
{
    
    while(i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
}   }
int main()
{
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements : ";
    for(int i = 0 ; i < n; i++)
    {

        cin>>arr[i];
    }
//    vector<int> arr = {1,2,3,4,5,6,7};
//    int n = arr.size();
   int k;
   cout<<"Enter the no of steps need to be moved : ";
   cin>>k;
   k = k % n;
   change(arr,0,n - 1);
   change(arr,0,k - 1);
   change(arr,k,n - 1);

   for(int ele : arr)
   {
    cout<<ele<<"  ";
   }
}