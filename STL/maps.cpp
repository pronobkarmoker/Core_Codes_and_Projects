#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, string> m; // key , string
    m[1] = "abc";
    m[5] = "cdc"; // replace hbe unique
    m[3] = "acd";
    m[5] = "cde";

    m.erase(3);

    // m.clear(); // all clear

    m.insert({4, "afg"}); // pair dite hy

    cout << m.size() << endl;
    
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl; // sorted order onujayi hy map e
    }

    // or use auto

    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}