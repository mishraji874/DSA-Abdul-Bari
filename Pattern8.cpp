#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            char ch = 'A' + i - 1;
            cout<<ch;
        }
        cout<<endl;
    }
    
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<'A';
        }
        cout<<endl;
    }

    //For printing A B C
    //             A B C
    //             A B C

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            char c = 'A' + j - 1;
            cout<<c;
        }
        cout<<endl;
    }
    
    
    return 0;
}