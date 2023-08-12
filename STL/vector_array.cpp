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

    int N;
    cout << "enter N: ";
    cin >> N;
    vector<int> v[N];
    for (int i = 0; i < N; i++)
    {
        int n;
        // cout << "enter value: ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

}