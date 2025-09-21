#include <bits/stdc++.h>

using namespace std;

int main()
{

    int x;
    cin >> x;


    int l = 1;

    while (x - l> 0)
    {
        x -= l;
        l++;
    }

    if (l % 2 == 0)
        cout << x << '/' << l - x + 1;
    else
        cout << l - x + 1 << '/' << x;

    return 0;
}