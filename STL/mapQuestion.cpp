#include <bits/stdc++.h>
using namespace std;

 // frequency determine and sort ...?
int main()
{
    map<string, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }

    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }
}

//output :
// 8   

// abc
// def
// abc
// ghj
// jkl
// ghj
// ghj
// abc

// abc 3
// def 1
// ghj 3
// jkl 1