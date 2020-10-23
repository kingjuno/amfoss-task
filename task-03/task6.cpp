/*
         * king_juno
          * 2020-10-22   09:51:56
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
        ll n,m,k,c=0,sum=0;
        cin>>n>>m>>k;
        vl a(m),b(m);
        read(a);
        read(b);
        rsor(b);
        fl(i,m){
            sum+=b[i];
            c++;
            if(sum>=n){
                if(c<=k){
                    cout<<"YES\n";
                    goto z;
                }
                else break;
            }
            
        }
        cout<<"NO\n";
        z:;
        
    }
    return 0;
}
