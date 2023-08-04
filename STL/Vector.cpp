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
    // similar to array but in array sixe is fixed
    // continues memory block

    vector<int> v;

    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        //cout << "enter value: ";
        cin >> val;
        printVec(v);
        v.push_back(val);
    }
    printVec(v);

    // we can also give size... and this will be "0" in all value
    vector<int> v2(10);
    printVec(v2);

    v2.push_back(7); // age 10 size er array declair hbe trpr 11 nmbr address e 7 jabe.
    printVec(v2);

    // to set all value a specific number
    vector<int> v3(10, 4);
    printVec(v3);

    // pop
    vector<int> v4;
    v4.push_back(7);
    v4.push_back(9); // add last
    printVec(v4);
    v4.pop_back(); // remove last
    printVec(v4);

    // copy
    vector<int> v5;
    v5.push_back(8);
    v5.push_back(9);

    vector<int> v6 = v5; //  O(n)
    v6.push_back(10);
    printVec(v5);
    printVec(v6);
}