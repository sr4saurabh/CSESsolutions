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
vii ans;
vii team(100001);
bool b = true;
//--------------------------------------------
void bfs(int v)
{
	queue <int> q;
  q.push(v);
  visited[v] = 1;
  team[v] = 1;
  while(!q.empty())
  {
      int g = q.front();
      q.pop();

      for(int h : adj[g])
      {
          if(!visited[h])
          {
              visited[h] = 1;
              team[h] = team[g]^1;
              q.push(h);
          }
          else
          {
              if(team[h] == team[g])
                b = false;
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
       while(m--)
       {
	       	int u,v;
	       	cin>>u>>v;
	       	adj[u].pb(v);
	       	adj[v].pb(u);
       }
       for(int i = 1; i <= n ;i++)
        if(!visited[i])
        bfs(i); 

       if(b == false)
        cout<<"IMPOSSIBLE\n";
      else
      {
          for(int i = 1; i <= n ; i++){
            if(team[i] == 0)
              team[i] = 2;
             cout<<team[i]<<' ';  
           }
      }
        






return 0;
}