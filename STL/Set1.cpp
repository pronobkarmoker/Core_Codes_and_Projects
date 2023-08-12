#include <bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for (string val : s)
    {
        cout << val << endl;
    }
}
int main()      // ordered , unique ,
{
    set<string> s;
    s.insert("abc");
    s.insert("xyz");
    s.insert("pqr");

    auto it = s.find("abc");
    if(it != s.end()){
        cout << (*it) << endl;
        s.erase(it);
    }

    print(s);
}