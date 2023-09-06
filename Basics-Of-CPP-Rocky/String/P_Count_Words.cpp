#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin, s);
    bool inside_word = false;
    int count = 0;
    for (char c : s)
    {
        if (isalpha(c))
        { // isalpha will return 1 or 2 for small and big alphavet and 0 for anything else
            if (!inside_word)
                count++;

            inside_word = true;
        }
        else
            inside_word = false;
    }
    cout<<count<<endl;
    return 0;
}