#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b, k;
    cin >> a >> b >> k;
    cout << a / b<<".";

    int rim = (a % b) * 10;
    
    while (k--)
    {
        cout << rim / b;
        rim%=b;
        rim? rim *= 10 : rim = 0;
    }
    
    return 0;
}