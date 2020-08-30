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




vii dp(100001,0);
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

      	for(int j = 0 ; j < n ; j++)
      	{
      		int v;
      		cin>>v;
      		vii tdp(100001,0);
      		for(int i = 0 ; i <= 100000 ; i++)
      			if(dp[i] > 0)
      				tdp[i+v]++ , tdp[i]++;
            
           tdp[v]++;
           for(int i = 0 ; i <= 100000; i++)
           		dp[i] = tdp[i];
      	}	     
      	vii v;
      	for(int i = 0 ; i <= 100000 ; i++)
      	     if(dp[i] > 0)
      			v.pb(i);
      	
      	cout<<v.size()<<'\n';
      	for(int i : v)
      		cout<<i<<' ';











return 0;
}