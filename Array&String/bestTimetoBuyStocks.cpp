#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, profit = 0;
    cin >> n;
    vector<int> prices;
    int vct[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }

    int buy = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < buy)
        {
            buy = prices[i];
        }
        else if (prices[i] - buy > profit)
        {
            profit = prices[i] - buy;
        }
    }
    return profit;
}