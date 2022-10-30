#include <bits/stdc++.h>
using namespace std;

int cutRod(int price[], int index, int n, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        return n * price[0];
    }
    if (dp[index][n] != -1)
        return dp[index][n];
    int notCut = cutRod(price, index - 1, n, dp);
    int cut = INT_MIN;
    int rod_length = index + 1;
    if (rod_length <= n)
        cut = price[index] + cutRod(price, index, n - rod_length, dp);
    return dp[index][n] = max(notCut, cut);
}