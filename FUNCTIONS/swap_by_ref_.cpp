#include <iostream>
using namespace std;
void sWap(int *a, int *b)
{
    
    *a = (*a + *b) - (*b = *a);
}
int main(){
    int a = 10, b = 20;
    sWap(&a, &b);
    cout<<a<<endl<<b;
}