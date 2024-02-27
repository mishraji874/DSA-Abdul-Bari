#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    for ( i = 0; i <= n; i++)
    {
        for ( j = 0; j <= n; j++)
        {
            char ch = 'A' + i + j -2;
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    
    return 0;
}