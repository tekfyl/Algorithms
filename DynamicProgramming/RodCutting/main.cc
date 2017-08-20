#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define vvl vector< vector<ll> >
#define mk make_pair
#define ii pair <int, int>
#define LL pair <ll, ll>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
using namespace std;

int main(){
    int n, len;
    cin >> n;
    vi length, val;
    rep(i,n){
        int l,v;
        cin >> l >> v;
        length.pb(l); val.pb(v);
    }
    cin >> len;
    vvi dp(n, vi(len+1, 0));
    rep1(j, len){
        dp[0][j] = val[0]*j;
    }
    rep1(i,n-1){
        rep1(j, len){
            if(j >= length[i]){
                dp[i][j] = max(dp[i-1][j], val[i] + dp[i][j-length[i]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n-1][len];
    return 0;
}

