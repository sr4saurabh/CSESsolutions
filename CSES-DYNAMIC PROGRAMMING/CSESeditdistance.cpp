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

      	vii dp(5001);
      	string pt;
      	cin>>pt;

      	string 	st;
      	cin>>st;

      	int m = pt.size();
      	int n = st.size();

      	for(int i = 0 ; i <= n ; i++)
      		dp[i] = i;
      	
      	for(int i = 1 ; i <= m ; i++)
      	{
      		vii tdp(n+1 , 0);
      		tdp[0] = i;

      		for(int j = 1 ; j <= n ;j++)
      		{

      			if(pt[i-1] == st[j-1])
      				tdp[j] = dp[j-1];
      			else
      				tdp[j] = min( tdp[j-1] , min( dp[j-1] , dp[j] )) + 1;
      		}

      		for(int i = 0; i <= n ; i++)
      			dp[i] = tdp[i];
      	}

      	cout<<dp[n];












return 0;
}