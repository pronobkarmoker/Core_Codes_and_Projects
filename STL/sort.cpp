#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end()); // surur address and ses er address
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}