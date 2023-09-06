#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

int size,index,value;
cin>>size>>index>>value;
int arr[size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}
for (int i = index; i < size-1; i++)
{
    arr[i]=arr[i+1];
}

for (int i = 0; i < size-1; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}