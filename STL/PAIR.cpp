#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;

    // first process
    p = make_pair(1431, "shuvo");
    cout << p.first << " " << p.second << endl;

    // 2nd process
    p = {1431, "shuvo"};
    cout << p.first << " " << p.second << endl;

    // Referance
    pair<int, string> &p1 = p;
    p1.first = 1401;
    cout << p.first << " " << p.second << endl;

    // ARRAY SWAP RELATED

    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};

    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    swap(p_array[0], p_array[2]);
    
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }
}