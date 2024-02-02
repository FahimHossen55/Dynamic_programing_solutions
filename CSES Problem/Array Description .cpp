
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









int32_t main(){
fast_io ;
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
//_________________________________________________________________________//





 int n  , mx ;
 cin>>n>>mx  ;
 int a[n] ;

for (int i = 0; i <n; ++i)
{
	cin>>a[i]  ;
}

int cnt= 0 ;
for (int i = 0; i <n; ++i)
{
	if(a[i]==0)
	{
		if(i==0 or i==n-1)  cnt+=3 ;

		if(a[i-1]==a[i+1]) cnt+=3  ;
		else cnt+=2 ;
	}
}


cout<<cnt<<endl; 


}