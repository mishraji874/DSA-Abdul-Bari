#include<iostream>
using namespace std;
int main() {
    int n, sum = 0, product = 1, digit;
    cin>>n;
    while (n != 0)
    {
        digit = n % 10;
        product = product * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int answer = product - sum;
    cout<<answer;
    return 0;
}