
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
#define N 201 
#define mod 1e9+7
#define mem(a) memset(a,-1,sizeof(a)) 

ll dp[N][N][N] ;





int  f( int  r, int g ,int b)
{
	if(r+g+b==1)
	{
		if(r==1) return 4 ;
		else if(g==1) return 2 ;
		else return 1  ;
	}
	if(dp[r][g][b]!=-1) return dp[r][g][b] ;
	int ans =0 ;
 if( r> 0 && g>0 ) ans |= f(r-1,g-1,b+1) ;
 if (r>0 and b> 0) ans |=f(r-1, g+1 ,b-1) ;
 if(g>0 and b>0 ) ans |= f(r+1,g-1,b-1) ;

 if(r>=2) ans |= f(r-1,g,b) ;
  if(g>=2) ans |= f(r,g-1,b) ;
 if(b>=2) ans |= f(r,g,b-1) ;
 return dp[r][g][b] = ans ;
}







int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//

mem(dp) ;

int n  ;
string s ;
cin>>n>>s ;

int r=0  , g= 0 , b=0 ; 

for (int i = 0; i <n; ++i)
{
  if(s[i]=='R') r++ ;
  else if(s[i]=='G') g++ ;
  else b++ ;
 }

int ans = f(r,g,b) ;

if(ans==1) cout<<"B"<<endl ;
else if(ans==2) cout<<"G"<<endl ;
else if(ans==3) cout<<"BG"<<endl ;
else if(ans==4) cout<<"R"<<endl ;
else if(ans==5) cout<<"BR"<<endl ;
else if(ans==6) cout<<"GR"<<endl ;
else  cout<<"BGR"<<endl ;





}//end 

