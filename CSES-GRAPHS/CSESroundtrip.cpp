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
vii color(100001);
vii par(100001);
int n ,m;
bool b = false;
vii vect;
int startt = -1 ; int endd = -1;
//--------------------------------------------
void dfs(int v)
{
	
	   color[v] = 2;
  
    for(int u : adj[v]){
    		if(!color[u] && b == false){
          par[u] = v;
    		 dfs(u);
         }
    		else
    		{
    			if(color[u]==2 && par[v]!=u  && b==false)
    			{
    				startt = u;
    				endd = v;
    				b = true;
    			}
    		}
    
	  }
  
    color[v] = 1;
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
       
       for(int i = 0 ; i < m ; i++)
       {
       		int u , v;
       		cin>>u>>v;
       		adj[u].pb(v);
       		adj[v].pb(u);
       }
       
        vii ans;

       for(int i = 1; i <= n ;i++)
       {
       		vect.clear();
       		
       		if(!color[i] && b == false)
       			 dfs(i);
       	
       		if(b == true){
            par[startt] = -1;
            
            int pa = endd;
       			while(pa!=-1)
            {
              ans.pb(pa);
              pa = par[pa];
            }
       			break;
       		}

      }
    	   
 	       
       if(b == false)
       {
       		cout<<"IMPOSSIBLE\n";
       }
       else
       {
        reverse(ans.begin(),ans.end());
        cout<<ans.size()+1<<'\n';
       		for(int u : ans)
	       			cout<<u<<' ';
       		cout<<ans[0];
       }








return 0;
}