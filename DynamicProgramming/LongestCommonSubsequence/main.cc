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


void FastIO(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    FastIO();
     string s1,s2;
        cin >> s1 >> s2;

        vector< vi > dp(s1.size()+1, vi(s2.size()+1,0));
        rep1(i,s1.size())
            rep1(j,s2.size())  
     dp[i][j] = s1[i-1] == s2[j-1] ? dp[i-1][j-1] +1 : max(dp[i-1][j], dp[i][j-1]);
            
        /*
        for(auto c:dp){
            for(auto d:c){
                cout << d << " ";
            }
            cout << endl;
        }
        */
        cout << dp[s1.size()][s2.size()];
        // Getting the LCS
       /*
        for(i=s1.size(), j=s2.size(); i>0,j>0; ){
                k = dp[i][j];
                if(k>dp[i-1][j] && k>dp[i][j-1]){
                        cout << s1[i-1];
                }
        }
        */
    return 0;
}

