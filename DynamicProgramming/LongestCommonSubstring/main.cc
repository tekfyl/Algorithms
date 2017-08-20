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
    string s,r;
    cin >> s >> r;
    int n = s.size(), m = r.size();
    vvi dp(n+1, vi(m+1,0));
    int max = -999;
    rep1(i,n){
        rep1(j,m){
            if(s[i-1] == r[j-1]){
                dp[i][j] = dp[i-1][j-1]+1;
                if(max < dp[i][j]) max = dp[i][j];
            }
            else{
                dp[i][j] = 0;
            }
        }
    }   
    cout << max;
    return 0;
}

