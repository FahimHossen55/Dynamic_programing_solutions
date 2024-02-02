
#include<bits/stdc++.h>
using namespace std;
 #define ll long long 
#define ull unsigned long long int 
 #define endl "\n" 
#define fp(s) for(auto it : s)
#define ff first
#define ss second
#define skip continue 
#define setbit(n,pos) (n|(1<<pos)) 
#define clearbit(n,pos) (n&(~(1<<pos)))
#define toggle(n,pos)  (n^(1<<pos))
#define all(s) s.begin(),s.end()
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0);
#define INF (1<<30)

ll n , w ;
vector<ll> wgt , v;
 ll dp[1000][1000] ;
ll f(   ll i ,ll x )
{ 
	 if(x<0) return -INF ;
	 if(i==n) return 0 ;
   if(dp[i][x]!=-1) return dp[i][x] ;
	ll res = -INF ;
	 res =  max(res , f(i+1 , x)) ;
	  res = max(res , v[i]+f((i+1) , x- wgt[i]))  ;
	return dp[i][x] = res ;
}





int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//

memset(dp,-1,sizeof(dp)) ;
cin>> n>>w ;
for (int i = 0; i <n; ++i)
{
	ll p , q ;
	cin>>p>>q  ;
	wgt.push_back(p) ;
	v.push_back(q) ;
}

cout<<f(0,w) ;




}