#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;  

int dp[101][1000000]; 
int v[101];
bool solve(int index, int k) {
    if(index == -1) {
        if(k == 0){
            return true;
        }
        return false;
    }
    if(dp[index][k] == -1) {
        if(k-v[index]>=0) {
            dp[index][k] = solve(index-1, k-v[index]) || solve(index-1,k);
        }else {
            dp[index][k] = solve(index-1,k);
        }
    }
    return dp[index][k];
}
/*
20 7 1 6 9
 0 1 2 3 4

solve(4,22)
    solve(3,13)
        solve(2,7)
            solve(1,6)
                solve(0,6)
            solve(1,7)
        solve(2,13)
    solve(3,22)

*/

int main() {

    //input;
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int queries;
    cin >> queries;
    while(queries--) {
        int k;
        cin >> k;
        if(solve(n-1, k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
