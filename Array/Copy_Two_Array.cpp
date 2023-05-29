#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int size1,size2,size3;
    cin>>size1>>size2;
    int arr1[size1],arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        cin>>arr2[i];
    }
    size3=size1+size2;
    int arr3[size3];
    for (int i = 0; i < size1; i++)
    {
        arr3[i]=arr1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        arr3[size1+i]=arr2[i];
    }
    for (int i = 0; i < size3; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
    
    

    return 0;
}