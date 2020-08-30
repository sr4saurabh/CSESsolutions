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
int dp[501][501];


//--------------------------------------------
void preprocess()
{
	for(int i = 0 ; i <= 500 ; i++)
	{
		for(int j = 0; j <= 500 ; j++)
		{
			dp[i][j] = mod;
			if(i == 0 || j == 0 || i == j)
				dp[i][j] = 0;
			else
			if(i == 1)
				dp[i][j] = j-1;
			else
			if(j == 1)
				dp[i][j] = i-1;
			else
			{
				for(int k = 1; k <= i/2 ; k++)
					dp[i][j] = min(dp[k][j] + dp[i-k][j] + 1,dp[i][j]);
				for(int k = 1; k <= j/2 ; k++)
					dp[i][j] = min(dp[i][k] + dp[i][j-k] + 1,dp[i][j]);
					
			}


		}
	}
}




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


       	int r , c;
       	cin>>r>>c;

       	preprocess();
      	 
      	cout<<dp[r][c];    













return 0;
}