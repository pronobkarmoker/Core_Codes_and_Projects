#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << " STACK :" << endl;
    stack<int>s;
    s.push(4);
    s.push(2);
    s.push(5);
    s.push(7);
    s.push(6);

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << " QUEUE :" << endl;

    queue<int> q;
    q.push(4);
    q.push(2);
    q.push(5);
    q.push(7);
    q.push(6);

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
}