/*
         * king_juno
          * 2020-10-22   17:45:31
*/
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef pair<ll,ll> pi;
typedef vector<pair<ll,ll>> vpi;
typedef map<ll,ll> mapi;
typedef map<ll,bool> truemap;
typedef map<string,int> maps;
 
#define fast ios::sync_with_stdio(0);cin.tie(0);

#define loop(i, a, b) for (int i=a; i<(b); i++)
#define fl(i, b) for (int i=0; i<(b); i++)
#define el "\n"
#define sp " "
#define fr first
#define sec second
#define pb push_back
#define spre(x) fixed<<setprecision(x)
#define read(s) fl(i,s.size())cin>>s[i];
#define write(s) fl(i,s.size())cout<<s[i]<<sp;
#define sor(s) sort(s.begin(),s.end());
#define rsor(s) sort(s.rbegin(),s.rend());
#define inf INT_MAX
#define rev(a) reverse(a.begin(),a.end());
#define sumv(a) accumulate(a.begin(),a.end());
#define maxv(a) max_element(a.begin(),a.end());
#define minv(a) min_element(a.begin(),a.end());
#define cnt(a,x) count(a.begin(),a.end(),x);

bool sortsec(const pair<int,int> &a,const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
} 

int main(){
    fast;
    ll n,m;
    cin>>n>>m;
    vl a(n);
    vl b(m);
    map<ll,vl>data;
    ll pos;
    fl(i,n){
        cin>>pos;
        data[pos].pb(i+1);
        sort(data[pos].begin(),data[pos].end());
    }
    fl(i,m){
        cin>>pos;
        if(data[pos].size()){
            cout<<data[pos][data[pos].size()-1]<<sp;
            data[pos].pop_back();
        }
        else cout<<-1<<sp;
    }
    
    return 0;
}
