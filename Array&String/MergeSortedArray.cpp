#include <bits/stdc++.h>
using namespace std;

void Merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int j = 0;
    int i = m;
    while ((i < m + n) && j < n)
    {
        nums1[i] = nums2[j];
        i++;
        j++;
    }
    sort(nums1.begin(), nums1.end());

    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i];
    }
}
