// https://codeforces.com/problemset/problem/1703/C

#include <bits/stdc++.h>
#define null nullptr
#define ll long long int
#define nl '\n'
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        for (char x : s)
        {
            if (x == 'U')
            {
                v[i] -= 1;
                if (v[i] == -1)
                    v[i] = 9;
            }
            else if (x == 'D')
            {
                v[i] += 1;
                if (v[i] == 10)
                    v[i] = 0;
            }
        }
        cout << v[i] << " ";
    }
    cout << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}