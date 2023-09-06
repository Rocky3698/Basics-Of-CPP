#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s="My name is Rocky Chowdhury";
    stringstream ss(s);
    string word;
    while (ss>>word)
    {
        cout<<word<<endl;
    }
    

    return 0;
}