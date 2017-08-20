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
    int n;
    cin >> n;
    vector<pair<int, ii > > v;
    rep(i,n){
        int in, out, pro;
        cin >> in >> out >> pro;
        v.pb(mk(pro, mk(in,out)));
    }
    vi dp(n);
    rep(i,n){
        dp[i] = v[i].fi;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(v[i].se.fi >= v[j].se.se){
                dp[i] = max(dp[i], dp[j]+v[i].fi);
            }
        }
    }
    cout << *mx(all(dp));
    return 0;
}

