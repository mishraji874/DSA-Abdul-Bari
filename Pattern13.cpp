#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; i <= i; i++)
        {
            char ch = 'A' + n - i;
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}