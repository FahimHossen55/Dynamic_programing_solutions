
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
#define N 1e5+4
#define INF (1<<30)

int n ;

ll h[100001] ;
ll dp[100001] ;
ll f(ll i )
{
	if(n==i) return 0 ;
	if(n<i) return INF;

	ll res =INF ;
	 
	 if(dp[i]!=-1) return dp[i] ;
	     res=  min(res ,abs(h[i]-h[i+1]) + f(i+1)) ;
	     res= min(res ,abs(h[i]-h[i+2]) + f(i+2)) ;
	 
	 return dp[i] = res ;
}






int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


memset(dp,-1,sizeof(dp)) ;
cin>> n;
for (int i = 1; i <=n; ++i)
{
	cin>>h[i] ;
	}

cout<<f(1)<<endl ;




}