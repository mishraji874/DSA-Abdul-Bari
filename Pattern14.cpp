#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int i = 1,j = 1;
    int space = n - i;
    while (i <= n)
    {
        while (space)
        {
            cout<<" ";
            space--;
        }

        while (j <= i)
        {
            cout<<"*";
            j++;
        }
        i++;
    }
    
    cout<<endl;
    return 0;
}