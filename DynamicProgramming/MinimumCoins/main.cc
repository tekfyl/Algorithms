#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define LL long long
#define pb push_back
#define vi vector<int>
#define vll vector<LL>
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
const int N = 2e5+7; vector< vi > g(N); vi vis(N,0);

void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    FastIO();
        int sum;
        cin >> n;
        vi coins;
        rep(i,n) cin >> in, coins.pb(in);
        cin >> sum;

        vector< vi > dp(n, vi(sum+1,0));
        for(j=0;j<sum+1;j++) dp[0][j] = j;
        for(i=1; i<n; i++){
            for(j=1; j<=sum; j++){
                dp[i][j] = (j>=coins[i] ? min(dp[i-1][j], 1+dp[i][j-coins[i]]) : dp[i-1][j]);
            }
        }
        cout << dp[n-1][sum];
    return 0;
}

