#include<iostream>
using namespace std;
void reverse(int a[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
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
    reverse(a,n);
    printArray(a,n);
    return 0;
}