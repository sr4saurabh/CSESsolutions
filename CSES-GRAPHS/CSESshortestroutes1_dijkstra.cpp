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
vpl adj[100001];
ll parent[100001];
ll dist[100001];
ll vis[100001];
ll n,m;
//--------------------------------------------
void dijkstra(ll source)
{
	for(ll i = 1; i <= n ;i++)
	{
		if(i == source){
			parent[i] = -1;
			dist[i] = 0;
		}
		else{
			dist[i] = 1e16 + 7ll;
		}
	}

	multiset<pll> s;

	s.insert(mp(0,source));

	while(!s.empty()){
		pll p = *s.begin();
		s.erase(s.begin());
		ll cur_dist = p.fi;
		ll node = p.se;

		if(vis[node]) continue;

		vis[node] = 1;

		for(pll v : adj[node]){
			ll dista = v.se;
			ll new_node = v.fi;
			if(dista + dist[(int)node] < dist[(int)new_node])
			{
				dist[new_node] = dista + dist[node];
				parent[new_node] = node;
				s.insert(mp(dist[new_node],new_node));
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

       cin>>n>>m;

       while(m--){
       	ll a,b,c;
       	cin>>a>>b>>c;
       	adj[a].pb(mp(b,c));
       }

       dijkstra(1);
       
       for(int i = 1; i <= n ; i++)
       {
       		cout<<dist[i]<<' ';
       }









return 0;
}