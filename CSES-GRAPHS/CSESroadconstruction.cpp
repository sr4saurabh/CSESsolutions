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
int setsize[100001];
int comp;
int max_size = 1;
vpl v;
//--------------------------------------------
void make_set(int v){
	parent[v] = v;
	setsize[v] = 1;
}
int find_set(int v){
	if(v == parent[v])
		return v;
	return parent[v] = find_set(parent[v]);
}
void union_set(int a , int b){
	a = find_set(a);
	b = find_set(b);
	if(a!=b)
	{
		parent[b] = a;
		setsize[a] = setsize[b]+setsize[a];
		max_size = max(max_size,setsize[a]);
		comp--;
	}
	v.pb(mp(max_size,comp));
	
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
   			int ma = 0;
   			comp = n;
   			

       while(m--){
       		int a,b;
       		cin>>a>>b;
       		union_set(a,b);

       }	
       
        for(pii p : v){
        	cout<<p.se<<" "<<p.fi<<'\n';
        }









return 0;
}