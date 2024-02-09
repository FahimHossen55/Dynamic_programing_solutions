
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
#define N 100003
#define mod 1e9+7
#define mem(a) memset(a,-1,sizeof(a)) 



ll dp[N] ;
ll h[N] ;
int n , k  ;
ll f(ll ind)
{
	 if(ind==n-1  ) return 0 ;
	 if(ind> n-1) return INF  ;
  if(dp[ind]!=-1) return dp[ind] ;
	 ll res =INF  ;

	 for (int i = 1; i <= k; ++i)
	 {
	 	res = min(res, abs(h[ind]- h[ind+i]) + f(ind+i) ) ;
	 }
	 return dp[ind] = res ;
}










int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


mem(dp) ;
 cin >> n >>k  ;

 for (int i = 0; i <n; ++i)
 {
  cin>>h[i] ;
 }



cout<<f(0)<<endl ;




}//end 

