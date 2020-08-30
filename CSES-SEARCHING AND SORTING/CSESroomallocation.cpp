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

             	     
       	int n;
       	cin>>n;
       	set<pair<pii , pii>> s;

       	for(int i = 0 ; i < n ;i++)
       	{
       		int a,b;cin>>a>>b;
       		s.insert(mp(mp(a,0),mp(i,1)));
       		s.insert(mp(mp(b,1),mp(i,-1)));
       	}

       //	for(auto it : s)
       //	{//
       	//	cout<<it.se.fi<<" "<<it.se.se<<'\n';
       	//}

       	int sum = 0,k = 0 , ma = 0;
       	vii v(n);
       	vii empty_room;
       	for(auto it : s)
       	{
       		sum += it.se.se;
       		if(it.se.se == 1)
       		{
       			//something from vector or the max value
       			if(empty_room.size() > 0){
       				v[it.se.fi] = empty_room.back();
       				empty_room.popb();
       			}
       			else
       			{
       				v[it.se.fi] = sum;
       			}
       		}
       		else
       		{
       			 empty_room.pb(v[it.se.fi]);			
       		}
       		ma = max(ma , sum);
       	}
       	cout<<ma<<'\n';

       	for(int i : v)
       		cout<<i<<' ';












return 0;
}