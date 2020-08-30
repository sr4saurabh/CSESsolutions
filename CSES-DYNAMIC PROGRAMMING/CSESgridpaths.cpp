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




ll dp[1000+1][1000+1];
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
 		char matrix[n+1][n+1];
 		for(int i = 1 ; i <= n ;i++)
 		{
 			string st;
 			cin>>st;
 			for(int j = 1; j <= n ; j++)
 				matrix[i][j] = st[j-1];
 		}     	     

 		//for(int i= 0 ; i <= n ;i++)
 		//	dp[0][i] = 1;
		if(matrix[1][1]=='.')
		 		dp[1][1] = 1;
 		for(int i = 1; i <= n ;i++)
 		{
 			for(int j = 1; j <= n ;j++)
 			{
 				if(i == 1 && j == 1) continue;
 				if(matrix[i][j]=='.')
 					dp[i][j] = (dp[i-1][j]+dp[i][j-1])%mod;
 			}
 		}

 		cout<<dp[n][n];












return 0;
}