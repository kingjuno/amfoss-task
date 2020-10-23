/*
         * king_juno
          * 2020-10-22   16:35:26
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
    ll m=1000000007;
    vl a(3);
    a[0]=1;
    a[1]=2;
    a[2]=3;
    loop(i,3,1000000)a.pb((a[i-1]%m+a[i-2]%m+a[i-3]%m)%m);
    while(t--){
        ll n;
        cin>>n;
        string x=to_string(a[n-1]);
        reverse(x.begin(),x.end());
        bool flag=0;
        fl(i,x.size()){
            if(x[i]!='0')flag=1;
            if(flag)cout<<x[i];
        }
        cout<<el;
    }
    return 0;
}
