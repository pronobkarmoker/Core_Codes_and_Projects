#include <bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int>> v)
{
    cout << "size " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "VALUES: " << v[i].first << " "<< v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    vector<pair<int, int >> v = {{1,2},{2,3},{3,4}};
    printVec(v);

    vector<pair<int,int>> vec;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin >> x >> y ;
        vec.push_back({x,y});
    }

    printVec(vec);
    

}