#include <bits/stdc++.h>
using namespace std;

void func(int n)
{
    if (n == 0)
        return;
    cout << n << endl; // 5 4 3 2 1
    func(n - 1);
    cout << n << endl; // 1 2 3 4 5
}

int main()
{
    func(5);
}

// stack use