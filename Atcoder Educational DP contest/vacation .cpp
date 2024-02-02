
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
#define N 1000006

 int n ;
 ll h[N][3] ;
ll dp[N][3] ; 

ll f(ll day , ll prev) 
{
	if(day>n) return 0 ;
ll res = 0  ;
if(dp[day][prev]!=-1) return dp[day][prev] ; 
for (int i = 0; i < 3; ++i)
{
  if(day==1 or i!=prev){
  	res = max(res,h[day][i]+f(day+1,i)) ;
  }

}
 return dp[day][prev] = res ;
}




int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif



memset(dp,-1,sizeof(dp)) ;


cin>> n;

for (int i = 1; i <=n; ++i)
{
	for(int j=0 ; j<3 ;j++)
		{
            cin>>h[i][j] ;
		}
}
cout<<f(1,0)<<endl ;


}