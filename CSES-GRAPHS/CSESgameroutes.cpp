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
vii dist(100001);
vii vis(100001);


//--------------------------------------------
void dfs(int s){

	for(int u : adj[s]){
		if(dist[u]==0)
		{
			//cout<<s<<" "<<u<<'\n';
			dfs(u);

		}
		dist[s] = (dist[s] + dist[u])%mod;

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

 	 int n , m;
 	 cin>>n>>m;

 	 while(m--){
 	 	int u ,v ;
 	 	cin>>u>>v;
 	 	adj[v].pb(u);
 	 }      
        
 	 dist[1] = 1;
 	 dfs(n);


 	 cout<<dist[n];





return 0;
}