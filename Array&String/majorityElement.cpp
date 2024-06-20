#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }

    int cnt = 0;
    for (auto x : mp)
    {
        cnt = max(cnt, x.second);
    }

    for (auto x : mp)
    {
        if (x.second == cnt)
        {
            cout << x.first << endl;
        }
    }

    return 0;
}