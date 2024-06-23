#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;
    rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());

    for (auto x : nums)
    {
        cout << x << " ";
    }

    return 0;
}