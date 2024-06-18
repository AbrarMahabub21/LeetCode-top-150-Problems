#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        mp[v[i]]++;
    }
    int k = mp.size();
    v.resize(k);
    int i = 0;
    for (auto x : mp)
    {
        v[i] = x.first;
        i++;
    }
    return k;
}