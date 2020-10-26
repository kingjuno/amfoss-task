/*
 		* king_juno
  		* 2020-10-26   22:23:13
*/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
typedef double ld;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef pair<ll,ll> pi;
typedef vector<pair<ll,ll>> vpi;
typedef map<ll,ll> mapi;
typedef map<ll,bool> truemap;
typedef map<string,int> maps;
 
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

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
ld a=0,b=0;
ld fn(ld x){
	ld fn1=x*x+a*x+b;
    ld ans=(fn1)/sin(x);
    return -ans;
}
ld calc(double l,double r){
	double eps = 1e-9; 
    while(r-l>eps) {
        double m1=l+(r-l)/3;
        double m2=r-(r-l)/3;
        double f1=fn(m1);     
        double f2=fn(m2);   
        if(f1<f2)
            l=m1;
        else
            r=m2;
    }
    return fn(l); 
}

int main(){
	fast;
	ll t;
	cin>>t;
	ld pi=3.141592653589793238462643383279502;
	pi=pi/2;
	while(t--){
		cin>>a>>b;
		cout<<spre(15)<<-calc(0.000000001,pi)<<el;
	}
	return 0;
}
