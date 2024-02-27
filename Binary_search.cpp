#include <iostream>
using namespace std;
int search(int arr[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8, 9};
    int x = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = search(arr, x, 0, n - 1);
    if (result == -1)
    {
        cout << "Not found";
    }
    else
    {
        cout << "Element is found at index " << result << endl;
    }
    return 0;
}