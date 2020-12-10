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
ll n,m,k;
vpl adj[100001];
ll dist[100001][10];
int vis[100001];
//--------------------------------------------
bool check(ll parent , ll child, ll d)
{

	ll cost[10];
	for(int i = 0;i < k ; i++)
		cost[i] = dist[parent][i] + d;

	ll tc[20];
	for(int i = 0 ; i <= (2*k - 1) ; i++){
		if(i < k)
			tc[i] = cost[i];
		else
			tc[i] = dist[child][i-k];
	}

	sort(tc,tc+((int)(2*k))); bool bo = false;
	for(int j = 0 ; j < k ; j++)
	{
		if(tc[j] < dist[child][j])
			{
				dist[child][j] = tc[j];
				bo = true;
			}

	}

	return bo;

}
//--------------------------------------------
void dijkstra()
{
	multiset<ll> s;
	s.insert(1ll);

	while(!s.empty())
	{
		ll node  = *s.begin();
		
		s.erase(s.begin());

		for(pll g : adj[node])
		{
			if(check(node,g.fi,g.se))
				s.insert(g.fi);
			cout<<node<<'\n';
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
       for(int i = 0 ; i <= 100000 ; i++){
       		for(int j = 0 ; j <= 9 ; j++)
       			dist[i][j] = 1e18;
       }

 	dist[1][0] = 0;
 	
 	for(int i = 0 ; i < m ;i++)
 	{
 		ll u,v,c;
 		cin>>u>>v>>c;
 		adj[u].pb(mp(v,c));
 	}


 	dijkstra();

 	for(int i = 0 ; i < k ; i++)
        cout<<dist[n][i]<<' ';









return 0;
}