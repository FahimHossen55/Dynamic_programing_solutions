
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

const int  mod = 1e9+7 ; 


int blocked[1001][1001] ;
ll n  , m ;
ll dp[1001][1001] ;
ll f( ll r , ll c)
{
	 if(r>n or c>m) return 0 ;
	 if(r==n and c==m) return 1 ; 

	
   if(blocked[r][c]) return 0 ; 
     ll ways = 0 ;
   if(dp[r][c]!=-1) return dp[r][c] ;
    
     ways= (ways+ f(r+1 ,c)) %mod ; 
     //ways+= f(r+1 ,c+1) ;
     ways= (ways + f(r,c+1)) %mod ;
  return dp[r][c] = ways ;
}

int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


 cin>>n>>m  ;
memset(dp,-1, sizeof(dp)) ;
 for (int i = 1; i <= n; ++i)
 {
 	for( int j=1 ; j<= m ; j++)
 	{
 		char c;
 		cin>>c ;
 		if(c=='#')blocked[i][j]= 1 ;
 		else blocked[i][j] = 0 ;
 	}
 }


cout<<f(1,1)<<endl ;








}