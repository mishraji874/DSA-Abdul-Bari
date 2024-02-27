#include <iostream>
using namespace std;
void swapalt(int a[], int n) {
    for (int i = 0; i < n - 1; i += 2)
    {
        int temp = a[i];
        a[i] = a[i+1];
        a[i+1] = temp;
    }
}
void printArray(int a[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    swapalt(a, n);
    printArray(a, n);
    return 0;
}