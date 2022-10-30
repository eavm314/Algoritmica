#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;   
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef map<int, int> mii;

ll _sieve_size;
bitset<10000010> bs;                             // 10^7 is the rough limit
int v[101];
vll p;    //[2,3,5,7]                                       // compact list of primes
// bs [0,0,1,1,0,1,0,1,....]

// int dp[200000000];
// void f(vector<int> &v) {
//     dp[0] = true;
//     for(int i = 0; i < v.size(); i++) {
//         for(int j = 0; j<100000000;j++){
//             if(v[i] <= j) {
//                 dp[j] = dp[j] || dp[j-v[i]];
//             }
//         }
//     }
// }

int dp[100000010];
int f(int k){
  if(k == 0) return 1;
  if( dp[k] == -1) {
    int ans = 0;
    for(int i = 0; i < k; i++) {
      if(k - v[i] >= 0) {
          if(k%v[i] == 0) {
            dp[k] = 1;
            return 1;
          }
          else {
            ans |= f(k-v[i]);
          }
      }
      dp[k] = ans;
    }
  }
  return dp[k];
}

int main() {
  input;
  output;
  cout<<1000<<endl;
  for(int i = 0; i <1000; i++) {
    cout << i+4000<<" ";
  }
  cout<<endl;
  cout<<10000<<endl;
  for(int i = 0;i<10000;i++) {
    // random number from 1 to 100000000
    int r = rand()%100000000+1;
    cout << r<<" ";
  }
    return 0;
}