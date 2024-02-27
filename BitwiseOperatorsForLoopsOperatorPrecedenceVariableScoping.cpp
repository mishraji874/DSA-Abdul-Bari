#include <iostream>
using namespace std;
int main() {

    int a = 4;
    int b = 6;

    cout<<" a & b: " << (a&b) <<endl;
    cout<<" a | b: " << (a|b) <<endl;
    cout<<" ~a: " << ~a <<endl;
    cout<< " a ^ b: " << (a^b) <<endl;

    //Right and left shift operator
    // for right shift use <<
    //for left shift use >>
    
    //in left shift operator we have to divide the given number 
    //in right shift operator we have to multiply the given number

    cout<< (17>>1) <<endl;
    cout<< (17>>2) <<endl;
    cout<< (19<<1) <<endl;
    cout<< (19<<2) <<endl;

    //Pre and post increment and decrement

    int i = 7;

    cout<<(++i)<<endl;
    cout<<(i++)<<endl;
    cout<<(i--)<<endl;
    cout<<(--i)<<endl;

    //FOR LOOP

    int n;
    cin>>n;
    cout<<"Printing the number from 1 to "<<n<<endl;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<endl;
    }

    //SUM FROM 1 TO N

    int c;
    cin>>c;
    int sum = 0;
    for (int i = 1; i <= c; i++)
    {
        sum = sum + i;
    }
    cout<<sum;

    //PRIME NUMBER USING FOR LOOP

    int d;
    cin>>d;
    for (int i = 0; i < n; i++)
    {
        if (n % i == 0)
        {
            cout<<"Not a prime number";
        }
        else
        {
            cout<<"Prime number";
        }
    }
    
    return 0;
}