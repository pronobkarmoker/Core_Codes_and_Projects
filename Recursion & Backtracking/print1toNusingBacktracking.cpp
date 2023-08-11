#include <bits/stdc++.h>
using namespace std;

void print(int s, int n)
{
    if (s < 1)
        return;

    print(s - 1, n);
    cout << s << endl;
}

int main()
{
    int n;
    cin >> n;

    print(n, n);
}