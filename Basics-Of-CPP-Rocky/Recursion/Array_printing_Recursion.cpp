#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void print(int arr[], int size, int index)
{
    if (size == index)
    {
        return;
    }
    cout << arr[index] << " ";
    print(arr, size, index + 1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int starting_index = 0;

    print(arr, size, starting_index);

    return 0;
}