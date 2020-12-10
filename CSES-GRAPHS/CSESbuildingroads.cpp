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
vii adj[100001];
vii visited(100001);
int n,m;



//--------------------------------------------
void dfs(int v)
{
	visited[v] = 1;
		for(int u : adj[v])
			if(!visited[u])
				dfs(u);
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
       while(m--)
       {
	       	int u,v;
	       	cin>>u>>v;
	       	adj[u].pb(v);
	       	adj[v].pb(u);
       }

       vii ans;
       for(int i = 1; i <= n ; i++)
       {
       		if(!visited[i]){
       			dfs(i);
       			ans.pb(i);
       		}
       }


       
       cout<<ans.size()-1<<'\n';
       for(int i = 1; i < ans.size() ; i++)
       	cout<<ans[i]<<" "<<ans[i-1]<<'\n';







return 0;
}