// container er element k  point kore
// .begin() == v[0]
// .end == v[n]
// vector<int> :: iterator it;

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] ;
    }
    
    vector<int> :: iterator it = v.begin();

    for (it = v.begin() ; it != v.end(); ++it)
    {
        // cout << &it << endl;
        cout << (*it) <<endl;
    }
    
    cout << (*it) << endl; // 0
    cout << (*it+1) << endl; // 1


//   pair 
    vector<pair<int,int>> v_p ={{1,2},{3,4},{4,5}};
    vector<pair<int,int>> :: iterator itt;

    for ( itt = v_p.begin(); itt != v_p.end(); itt++)
    {
        cout << (*itt).first << " " << (*itt).second << endl; // (*itt).first
    }

    for ( itt = v_p.begin(); itt != v_p.end(); itt++)
    {
        cout << (itt->first) << " " << (itt->second) << endl;    // itt -> first
    }
    
}
