#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout << "size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "VALUES: " << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> v;
    for (int j = 0; j < 3; j++)
    {
        int n;
        cin >> n;

        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            temp.push_back(val);
        }
        v.push_back(temp);
    }

    for (int i = 0; i < v.size(); i++)
    {
        printVec(v[i]);
    }
    
}