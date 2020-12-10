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
int parent[100001];
//--------------------------------------------
void make_set(int v){
	parent[v] = v;
	
}
int find_set(int v){
	if(v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}
bool union_set(int a , int b){
	a = find_set(a);
	b = find_set(b);
	if(a!=b)
	{
		parent[b] = a;
    return 0;
	}
	
	return 1; //returns true if they have same parent
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

       int n,m;
       cin>>n>>m;
       for(int i = 1; i <= n ; i++)
       make_set(i);
   	  
        vector<pair<ll , pll>> cost;

       while(m--){
       		ll a,b,c;
       		cin>>a>>b>>c;
          cost.pb(mp(c,mp(a,b)));
       }	

       sort(cost.begin(),cost.end());
       ll ans = 0;
        for(pair<ll,pll> p : cost){
          int co = p.fi;
          int a = p.se.fi;
          int b = p.se.se;

          bool bo = union_set(a,b);
          if(bo == false)
            ans += co;
        }

        bool game = true;
        for(int i = 2; i <= n ;i++){
          if(find_set(i)!=find_set(i-1))
            game = false;
        }
        if(game)
        cout<<ans;
      else
        cout<<"IMPOSSIBLE";







return 0;
}