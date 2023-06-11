#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;

    // int arr[size];
    // for (int i = 0; i < size; i++) //input
    // {
    //     cin >> arr[i];
    // }

    int a;
    int frequency[10] = {0};
    for (int i = 0; i < size; i++)
    {
        cin >> a;
        frequency[a]++;
    }

    // for (int i = 0; i < size; i++)
    // {
    //     frequency[arr[i]]++;
    // }

    for (int i = 0; i < 10; i++) // output
    {
        cout << i << "-->"
             << " " << frequency[i] << endl;
    }

    return 0;
}