#include <bits/stdc++.h>
using namespace std;

int sum(int n, int a[])
{
    if (n < 0)
        return 0;

    return a[n] + sum(n - 1, a);
}

int main()
{
    int a[100];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << sum(n - 1, a) + a[n];

    // cout << s << endl;
}