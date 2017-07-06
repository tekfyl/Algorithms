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
double tick(){static clock_t oldt,newt=clock();double diff=100.0*(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}

using namespace std;

ll inf=1e18+1;  
ll N=400; 
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;
vvi g(N); vi vis(N,0), dis(N,INT_MAX), v(N);
map<ii, int> w;
vi q;

void dijkstra(){
    int s = 1;
    dis[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii> > q;
    q.push(mk(0,1));
    while(!q.empty()){
        ii top = q.top();
        int d = top.fi, s = top.se;
        q.pop(); vis[s] = 1;
        for(auto d:g[s]){
            if(!vis[d]){
                if(dis[d] > dis[s] + w[mk(s,d)]){
                    dis[d] = dis[s] + w[mk(s,d)];
                    v[d] = s;
                    q.push(mk(dis[d], d));
                }
            }
        }
    }
    cout << dis[n];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    rep(i,m){
        cin >> v1 >> v2 >> t;
        g[v1].pb(v2);
        g[v2].pb(v1);
        w[mk(v1,v2)] = t;
        w[mk(v2,v1)] = t;
    }
    dijkstra();
    cout << endl;
    vi ans;
    int s = n;
    while(s != 0){
            ans.pb(s); s = v[s];
    }
    reverse(all(ans));
    for(auto d: ans) cout << d << " ";
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

