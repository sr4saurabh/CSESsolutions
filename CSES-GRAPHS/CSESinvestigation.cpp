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
ll n,m;
vpl adj[100001];
vll dist(100001,1e18);
vii vis(100001);
vll paths(100001);
vll min_flight(100001,mod);
vll max_flight(100001);
//--------------------------------------------
void dijkstra(){

	multiset<pll> s;
	s.insert(mp(0,1));
	paths[1] = 1;
	min_flight[1] = 0;

	while(!s.empty()){
		
		pll p = *s.begin();
		s.erase(s.begin());
		if(vis[p.se]) continue;

		ll node = p.se;
		ll cost = p.fi;
		vis[p.se] = 1;

		for(pll curr : adj[node]){

			if(curr.se + cost < dist[curr.fi]){

				dist[curr.fi] = curr.se + cost;
				paths[curr.fi] = paths[node];
				min_flight[curr.fi] = (min_flight[node]+1);
				max_flight[curr.fi] = (max_flight[node]+1);
				s.insert(mp(dist[curr.fi],curr.fi));
			}
			else
			if(curr.se + cost == dist[curr.fi]){
				paths[curr.fi] = (paths[curr.fi] + paths[node])%mod;
				min_flight[curr.fi] = min(min_flight[node]+1,min_flight[curr.fi]);
				max_flight[curr.fi] = max(max_flight[node]+1,max_flight[curr.fi]);
				s.insert(mp(dist[curr.fi],curr.fi));
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
  			ll u,v,c;
  			cin>>u>>v>>c;
  			adj[u].pb(mp(v,c));
  		}      

  		dist[1] = 0;
  		dijkstra();
  		cout<<dist[n]<<' '<<paths[n]<<' '<<min_flight[n]<<' '<<max_flight[n];






return 0;
}