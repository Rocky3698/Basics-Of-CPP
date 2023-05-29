#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int index, value, size;
    cin >> size >> index >> value;
    int arr[size + 1];
    for (int i = 0; i < size; i++) // input
    {
        cin >> arr[i];
    }
    for (int i = size; i >= index; i--) // position changing
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;            // inserting
    for (int i = 0; i < size+1; i++) // output
    {
        cout << arr[i]<<" ";
    }

    return 0;
}