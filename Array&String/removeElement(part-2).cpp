#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int index = 1;
        int cnt = 1;
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            if (cnt <= 2)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};