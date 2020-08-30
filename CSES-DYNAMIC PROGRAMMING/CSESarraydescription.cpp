/*--ILRS-- sr4saurabh  */
#include <bits/stdc++.h>
using namespace std; 
typedef long long int ll;
#define pb push_back 
#define popb pop_back
#define mp make_pair
#define ve vector
#define vii vector < int >
#define vll vector < ll > 
#define pii pair < int , int >
#define pll pair < ll , ll >
#define vpl vector < pll >
#define fi first
#define sz size 
#define len length 
#define se second 
//const ll mod=998244353;
const ll mod = 1000000000+7;
const ll N=10000000+6;
#define M_PI           3.14159265358979323846
//--------------------------------------------



//--------------------------------------------





//============================================
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
       freopen ("INPUT.txt" , "r" , stdin);
       freopen ("OUTPUT.txt", "w" , stdout);
    #endif

	//THE WATER WAS DEEP, I DROWNED AND THEN CAME FLOATING UP,DEAD!!

      	
      	int n,m;
      	cin>>n>>m;
      	ll arr[n];

      	for(int i = 0; i < n ; i++)
      		cin>>arr[i];

      
      	ll ans = 1;
      	vll tdp(m+2,0);
      	vll dp(m+2,0);

      	if(arr[0]==0){
      		dp.assign(m+2,1);
      		dp[0] = 0;
      		dp[m+1] = 0;
      	}
      	else
      	  dp[arr[0]] = 1;
      	
      	ll tans = 0;

      	for(int i = 1 ; i < n ;i++)
      	{
      		vll tdp(m+2,0);

      		if(arr[i] == 0){
      		   for(int i = 1 ; i <= m ;i++)
      			   tdp[i] = (dp[i-1] + dp[i] + dp[i+1])%mod;
      		}
      		else{
      		    tans = dp[arr[i]]+dp[arr[i]-1]+dp[arr[i]+1];
      			ans = (ans*tans)%mod;
      			tdp.assign(m+2,0);
      			tdp[arr[i]]=1;
      			tans = 0;

      		}

      		for(int i = 1 ; i <= m ; i++)
      			dp[i] = tdp[i];
      		
      	}

      	for(int i = 1; i <= m ; i++)
      		tans = tans + dp[i];
      	ans = (tans*ans)%mod;
      	cout<<ans;














return 0;
}