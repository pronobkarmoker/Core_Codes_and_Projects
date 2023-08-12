#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 5, 6, 7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    for (auto it = v.begin(); it != v.end(); it++) // vector<int>::iterator it; we dont need to use it
    {
        cout << (*it) << " ";
    }
    cout << endl;
}