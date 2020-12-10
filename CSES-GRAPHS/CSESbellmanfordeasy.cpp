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



//--------------------------------------------





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
 		int  t  = m ;
 		vector<pair<pll,ll>> v;
 		while(t--){
 			ll a,b,c;
 			cin>>a>>b>>c;
 			v.pb(mp(mp(a,b),c));
 		}      
        ll d[n+1];
        ll mx = -1*1e15 + 5ll;
        int tr = -1;
        //memset(d,mx,sizeof(d));
        for(int i = 0 ; i <= n ;i++)
        	d[i] = mx;
        d[1] = 0;
 		for(int i  = 0 ; i < n ; i++)
 		{
 			 tr = -1;
 			for(int j = 0 ; j < m ; j++){
 				
 				if(d[v[j].fi.fi] > mx){
 					//cout<<"in1";
	 				ll old = d[v[j].fi.se];
	 				
	 				if(d[v[j].fi.se]==mx){
	 					//cout<<"in2";
	 					d[v[j].fi.se] = v[j].se;
	 				}
	 				else
	 				d[v[j].fi.se] = max(d[v[j].fi.se],d[v[j].fi.fi]+v[j].se);
	 				
	 				cout<<"node "<<v[j].fi.se<<"relaxed to "<<d[v[j].fi.se]<<'\n';
	 				if(v[j].fi.se == n)
	 				tr = 100;

	 				//cout<<j<<"  relaxed\n";
	 			  }
 			}
 		}
 		if(tr > 0)
 			cout<<-1;
 		else
 			cout<<d[n];
 		//for(int j = 1 ; j <= n ; j++)
 		//	cout<<d[j]<<'\n';







return 0;
}