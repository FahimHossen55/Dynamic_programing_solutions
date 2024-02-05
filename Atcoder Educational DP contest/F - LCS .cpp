
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



string s, t , sq ;
int dp[3000][3000] ; 
ll mark[3000][3000] ;
ll  f(ll i , ll j)
{
	if(i==s.size() or j==t.size()) return 0 ;
    if(dp[i][j]!=-1) return dp[i][j] ;
    ll res =0 ;

    if(s[i]==t[j])
    	{
    		//cout<<s[i] ;
mark[i][j]=1 ;
    	 res = max(res ,1+f(i+1,j+1)) ;
    	 
    	}
    	else
    	{
    		ll tmp1 = f(i+1,j) ;
    			ll tmp2 = f(i,j+1) ;
    	if(tmp1 > tmp2 ) {
     mark[i][j] = 2 ;

    	} else {
    		mark[i][j] = 3 ;
    	}
  res = max(tmp1 ,tmp2 ) ;

    		
    	} 
    	return dp[i][j] = res ;
}
void print_way( ll i , ll j){
		if(i==s.size() or j==t.size()) return  ; 

if(mark[i][j]==1)
{
	cout<<s[i] ; 
	print_way(i+1, j+1) ;
}
else if(mark[i][j]==2)print_way(i+1,j) ;
else print_way(i,j+1) ; 

}






int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


cin>>s >>t ;
memset(dp,-1,sizeof(dp)) ;
f(0,0)  ;
print_way(0,0) ;
cout<<endl ; 
// cout<<sq<<endl ;



}