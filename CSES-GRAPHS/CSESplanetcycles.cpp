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
vii adj[200001];
vii dist(200001);
vii vis(200001);
vii parent(200001);
vii cycles;
int s , e;
//--------------------------------------------
void dfs(int v)
{
	vis[v] = 2;
	for(int u : adj[v]){
		if(!vis[u]){
			parent[u] = v;
			dfs(u);
		}
		else
		{
			if(vis[u] == 2 && e == -1){
				//cout<<"inside else  "<<v<<'\n';
				e = v;
				s = u;
				vis[v]= 1;
				return;
			}
				
		}
	}

	vis[v] = 1; 
}
//----------------------------------
void dfs2(int v)
{
	if(dist[v] > 0)
		return;

	for(int u : adj[v]){
		dfs2(u);
		dist[v] = 1 + dist[u];
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

       int n;
       cin>>n;
       for(int i = 1; i <= n ;i++)
        {
        	int val;cin>>val;
        	adj[i].pb(val);
        }

        for(int i = 1 ; i <= n ;i++){
        	e = -1;
        	s = -1;
        	cycles.clear();
        	if(!vis[i]){
        		parent[i] = -1;
        		dfs(i);
        	}
        	int ee = e;int ss =s;
        	while(ee != -1)
        	{
        		cycles.pb(ee);
        		if(ee == ss)
        			break;
        		ee = parent[ee];
        	}

        	for(int gg : cycles)
        		dist[gg] = cycles.size();
        }

        for(int i = 1; i<= n ;i++){
        	if(dist[i] == 0){
        		dfs2(i);
        	}
        }

        for(int i = 1; i <= n ;i++)
        	cout<<dist[i]<<' ';







return 0;
}