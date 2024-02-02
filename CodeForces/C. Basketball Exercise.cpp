
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
 const int N = 1e5+6 ; 
 int n  ;
ll h[2][N] ;
ll dp[3][N] ;
ll f(ll ind , ll prev)
{
	
 if( ind==n) return  0 ;

 ll res = -INF ; 
 if(dp[prev][ind]!=-1) return dp[prev][ind] ;
 if(prev ==0  )
 {
 	res=  max(res,h[1][ind]+ f(ind+1,1)) ;
 	res = max(res, f(ind+1 ,2 )) ;
 }
 if(prev==1) {
 	res = max(res , h[0][ind]+ f(ind+1,0)) ;
    res = max(res, f(ind+1 ,2 )) ;
 }
if(prev==2) {
res=  max(res,h[1][ind]+ f(ind+1,1)) ; 
res = max(res , h[0][ind]+ f(ind+1,0)) ;
 	res = max(res, f(ind+1 ,2 )) ;
	}

 return  dp[prev][ind] = res ;
}




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//

    cin>> n ;
memset(dp,-1,sizeof(dp)) ;
  for (int i = 0; i <n; ++i)
    {
    	cin>>h[0][i] ;
    }  
 for (int i = 0; i <n; ++i)
    {
    	cin>>h[1][i];
    } 

cout<<f(0,2) <<endl ;


}