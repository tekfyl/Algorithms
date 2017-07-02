#include <bits/stdc++.h>

#define all(c) c.begin(), c.end()
#define ll long long
#define pb push_back
#define vi vector<int>
#define vll vector<ll>
#define vvi vector< vi >
#define mk make_pair
#define ii pair <int, int>
#define fi first
#define se second
#define mx max_element
#define mn min_element
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)

using namespace std;

ll inf=1e18+1;  
int N=100; 
vi v,q,st;
int in=0,i=0,j=0,k=0,ans=0;
int n=0,m=0,t=0,v1=0,v2=0;
char c; string s;




int main(){
    ios_base::sync_with_stdio(0);
        cin >> n;
        rep(i,n) cin >> in, v.pb(in);
        ll ans=0, max_ending_now=0;
        rep(i,n){
            max_ending_now += v[i];
            if(max_ending_now < 0) max_ending_now = 0;
            if(ans < max_ending_now) ans = max_ending_now;
        }
        cout << ans << endl;
    return 0;
}

