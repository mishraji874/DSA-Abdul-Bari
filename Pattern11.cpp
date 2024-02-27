#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            char ch = 'A' + i - 1;
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}