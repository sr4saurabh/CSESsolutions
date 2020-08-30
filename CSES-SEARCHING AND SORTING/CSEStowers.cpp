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
 		int c = 0;
 		multiset<int> s;
 		c = 1;
 		int v;
 		cin>>v;
 		s.insert(v);

 		for(int i = 1 ;i < n ;i++)
 		{
 			cin>>v;
 			auto it = s.upper_bound(v);
 			if(it != s.end())
 			{
 				s.erase(it);
 				s.insert(v);
 		
 			}
 			else
 			{
 				c++;
 				s.insert(v);
 			}
 		}            	     

 		cout<<c;












return 0;
}