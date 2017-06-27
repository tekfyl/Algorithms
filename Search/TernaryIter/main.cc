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
        cin >> n;
        rep(i,n) cin >> in, v.pb(in);
        int x; cin >> x;
        int l=0, r=n-1;
        while(!(l>r)){
                int m1 = l+ (r-l)/3;
                int m2 = m1+ (r-l)/3;
                if(x<v[m1]) r = m1-1;
                else if(x<v[m2]) l = m1+1, r = m2-1;
                else if(x>v[m2]) l = m2+1;
                else if(x == v[m1]) {
                    cout << m1; return 0;
                }
                else{
                    cout << m2; return 0;
                }
        }
        cout << -1;
    return 0;
}

