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

       	ll n,x;
       	cin>>n>>x;

       	ll arr[n];
       	map<ll ,vii> hmap;

       	for(int i = 1 ;i <= n ;i++){

       		cin>>arr[i];
       		hmap[arr[i]].pb(i);
       	}
       /**	for(auto it  : hmap)
       	{
       		for(int i : it.se)
       			cout<<i<<" ";

       		cout<<'\n';
       	}**/

       	int a = -1 , b = -1;
       	for(auto it : hmap)
       	{
       		int f = x - it.fi;

       		if(f == it.fi)
       		{
       			if(hmap[f].size() > 1)
       			{
       			
       				a = it.se[0];
       				b = it.se[1];
       				break;
       			}
       		}
       		else{
       		
       		if(hmap.count(f) > 0)
       		{

       			a = it.se[0];	
       			b = hmap[f][0];
       			break;
       		}
       	  }
       	}

       	if(a == -1)
       		cout<<"IMPOSSIBLE";
       	else
       		cout<<a<<" "<<b;
















return 0;
}