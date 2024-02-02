
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
 ll dp[501][501] ;
ll  a ,b ;

ll f(ll r , ll c)
{
	if(r==c)
	{
		return 0 ;
	}
	ll res  =INF  ; 
 if(dp[r][c]!=-1) return dp[r][c] ;
for (ll i = 1; i <r; ++i)
{
	res = min( res ,1+f(i , c) + f(r-i, c)) ;
	
}
for (ll i = 1; i < c; ++i)
{
	res = min( res ,1+f(r, i)+f(r,c-i)) ;
	
}
  return dp[r][c] =res ;
}




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


cin>>a>>b ;

memset(dp,-1,sizeof(dp)) ;
cout<<f(a,b)<<endl ;

}