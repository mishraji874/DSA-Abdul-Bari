#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    int count = 1;

    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    
    return 0;
}