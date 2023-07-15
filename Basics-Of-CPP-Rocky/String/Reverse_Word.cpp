#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
void print(stringstream& ss){
    string word;
    if(ss>>word){
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s =" My name is Shahin Chowdhury Rocky";
    stringstream ss(s);
    print(ss);

    return 0;
}