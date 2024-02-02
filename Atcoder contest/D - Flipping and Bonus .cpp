
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

#define  INF (1<<30)
#define N 5001



 ll n , m  ;
 ll dp[N][N] ; 
vector<ll> c(N) ,v(N);
ll f(int ind , int cn ) 
{
   if(ind == n ) return 0 ;  

   ll res =0 ;
 if(dp[ind][cn]!=-1) return dp[ind][cn] ;
 
  res = max(res , f(ind+1,0)) ;
  res  = max(res , v[ind] +c[cn+1]+f(ind+1,cn+1)) ;


return dp[ind][cn] = res ;



}




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//



memset(dp,-1,sizeof(dp)) ;
cin>>n>>m ;

for (int i = 0; i <n; ++i)
{
	 cin>>v[i] ;
}
for (int i = 0; i < m; ++i)
{
	ll  p , q  ;
	cin>>p>>q ;

	c[p]=q  ;
}
cout<<f(0,0) <<endl ;



}




