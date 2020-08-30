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


ll dp[5001][5001];	


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

      		
      		
       int n;
       cin>>n;
       ll arr[n];
       ll tot = 0;
       for(int i = 0 ; i < n ;i++){
       	  cin>>arr[i];
       	  tot += arr[i];
       }

       for(int i = n-1 ; i >= 0 ; i--)
       {
       		for(int j = i ; j < n ; j++)
       		{
       			if(i==j)
       				dp[i][j] = arr[i];
       			else
       			{
       				dp[i][j] = max(arr[j]-dp[i][j-1],arr[i]-dp[i+1][j]);
       			}
       		}
       }

       ll g = dp[0][n-1];
       ll ans = (tot+g)/2;
       cout<<ans<<'\n';










return 0;
}