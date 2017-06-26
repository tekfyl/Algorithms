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
        string r;
        cin >> s >> r;
        n=s.size(); m=r.size();

        vector< vi > dp(n+1, vi(m+1,0));
        rep(i,n+1) dp[i][0] = i;
        rep(j,m+1) dp[0][j] = j;
        rep1(i,n){
            rep1(j,m){
                dp[i][j] = s[i-1] == r[j-1] ? dp[i-1][j-1] : 1+min(dp[i-1][j-1], min(dp[i][j-1], dp[i-1][j]));
            }
        }
        for(auto c:dp){
            for(auto d:c){
                cout << d << " ";
            }
            cout << endl;
        }
        cout << dp[n][m];
    return 0;
}

