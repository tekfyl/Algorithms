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
#define swap(a,b) a=a^b,b=a^b,a=a^b
#define rep(i,n)    for(__typeof(n) i = 0; i < n; i++)
#define rep1(i,n)   for(__typeof(n) i = 1; i <= n; i++)
double tick(){static clock_t oldt,newt=clock();double diff=(newt-oldt)/CLOCKS_PER_SEC;oldt=newt;return diff;}
using namespace std;

ll inf=1e18+1;  
ll N; 
vll v,q,st;
ll in=0,i=0,j=0,k=0,ans=0;
ll n=0,m=0,t=0,v1=0,v2=0;
char c; string s;

int part(int start, int end){
    int pivot = v[end];
    int pindex = start;
    for(i=start; i<end; i++){
        if(v[i]<pivot){
            swap(v[i], v[pindex]);
            pindex++;
        }
    }
    swap(v[pindex], v[end]);
    return pindex;
}

void Quick(int start, int end){
    if(start<end){
        int pivot = part(start,end);
        Quick(start,pivot-1); Quick(pivot+1,end);
    }
    else return;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin >> n;
    rep(i,n) cin >> in, v.pb(in);
    Quick(0,n-1);
    for(int c:v) cout << c << " ";
    //cout<<"\n"<<"Execution time : "<<tick()<<"\n";
    return 0;
}

