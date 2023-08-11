#include <bits/stdc++.h>
using namespace std;

bool Func(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return Func(i + 1, s);
}

int main()
{
    string s = "MADAM";
    cout << Func(0, s);
    return 0;
}