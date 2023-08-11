#include <bits/stdc++.h>
using namespace std;

void name(int s, int n)
{
    if (s > n)
        return;
    cout << "SHUVO!" << s << endl;
    name(s+1, n );
}

int main()
{
    int n;
    cin >> n;
    name(1, n);
}