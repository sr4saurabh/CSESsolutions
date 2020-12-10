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
char matrix[1001][1001];
char vis[1001][1001];
int n,m;

//--------------------------------------------
bool check(int i , int j)
{
	if(vis[i][j]==0 && i>=1 && i<=n && j>=1 && j<=m && matrix[i][j]=='.')
		return true;

	return false;
}


void dfs(int i , int j)
{
	vis[i][j] = 1;
	for(int x = -1; x <= 1 ; x++)
	{
		for(int y = -1 ; y <= 1 ; y++)
		{
			if(abs(x)!=abs(y) && check(i+x,j+y))
				dfs(i+x , j+y);
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


       
       cin>>n>>m;

       for(int i = 0 ; i < n ; i++)
       {
       		string st;
       		cin>>st;
       		for(int j = 0 ; j < m ; j++)
       			matrix[i+1][j+1] = st[j];
       }
       int co = 0;
       for(int i = 1 ; i <= n ; i++)
       {
       	for(int j = 1; j <= m ;j++)
       	{
       			if (check(i,j)){
     
       				dfs(i,j);
       				co++;
       			}
       	}
       }

       cout<<co;








return 0;
}