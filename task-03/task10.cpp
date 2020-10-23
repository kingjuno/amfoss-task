/*
         * king_juno
          * 2020-10-22   15:51:16
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
    ll t;
    cin>>t;
    while(t--){
        string n;
        ll m;
        cin>>n>>m;
        vl prefix;
        ll sum;
        if(n.size()<m){
            cout<<-1<<el;
            continue;
        }
        ll mi=inf;
        ll pos=0;
        fl(i,m)sum+=int(n[i])-48;
        prefix.pb(sum);
        loop(i,m,n.size()){
            sum=int(n[i])-48+sum-(int(n[pos++])-48);
            if(i!=0)
            mi=min(mi,abs(prefix[prefix.size()-1]-sum));
            prefix.pb(sum);
        }
        if(mi!=inf)cout<<mi<<el;
        else cout<<-1<<el;
    }
    return 0;
}
