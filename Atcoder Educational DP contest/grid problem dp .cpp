
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




int n , m ;
int dp[1005][1005] ; 
int blocked[1000][1000] ;
int f(int r , int c)
{
	if(r==n and c==m) return 1 ;
	 if(r>n or c>m ) return 0 ;
	 if(blocked[r][c]) return 0 ;
	  int res =0 ;
	  if(dp[r][c]!=-1) return dp[r][c] ; 
      res+=f(r+1,c) ;
      res+=f(r,c+1) ;
      res+=f(r+1,c+1) ;
      return dp[r][c] = res ;
}




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//



cin>>n>>m ;
memset(dp,-1,sizeof(dp)) ;


// blocked grid 

for (int i = 1; i <= n; ++i)
{
	for (int j = 1; j <= m ; ++j)
	{
		char c ;
		cin>>c ;
		blocked[i][j] = c-'0' ;
	}
}
cout<<f(1,1)<<endl ;


}