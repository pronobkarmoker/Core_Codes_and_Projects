#include <bits/stdc++.h>
using namespace std;

void reverseArray(int a[], int i, int j)
{
    if (i >= j)
        return;
    swap(a[i], a[j]);
    reverseArray(a, i + 1, j - 1);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "before recursion : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    reverseArray(a, 0, n - 1); // Call the reverseArray function to reverse the array

    cout << "\nafter recursion : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
