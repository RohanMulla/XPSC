// https://codeforces.com/contest/44/problem/A

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<string> s;
    cin.ignore();
    while (n--)
    {
        string ss;
        getline(cin, ss);
        s.insert(ss);
    }
    cout << s.size();
    return 0;
}