#include <bits/stdc++.h>
using namespace std;

bool should_I_swap(int a, int b)  // comparator  -> cz it determine the bhv
{
    if (a > b)
        return true;
    else
        return false;
}


int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (should_I_swap(a[i], a[j]))
            {
                swap(a[i], a[j]);
            }
        }
    }

    sort(a.begin(), a.end(), should_I_swap); // surur address and ses er address & comparator
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}