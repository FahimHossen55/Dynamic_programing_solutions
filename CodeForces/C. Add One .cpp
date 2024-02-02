
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

ll mod = 1e9+7 ;
string s ;
 ll dp[10][200001] ;

 ll f( int d , int m) 
 {
 	if(m==0) return 1 ; 

ll res = 0 ;
if(dp[d][m]!=-1) return dp[d][m]  ;
 if(d<9) res = f(d+1, m-1)%mod ;
else res = (f(1 , m-1)%mod)+(f(0,m-1)%mod) ;
 
 return dp[d][m]= res%mod  ;
 }




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//


memset(dp,-1,sizeof(dp)) ;
int t=1 ;                 cin>>t ;
while(t--){
	

int  m ;
cin>>s>>m ;
ll ans =0 ;
fp(s)
{
 ans = (ans + f(it-'0' , m))%mod ;
}
cout<<ans<<endl;




}// End 






}