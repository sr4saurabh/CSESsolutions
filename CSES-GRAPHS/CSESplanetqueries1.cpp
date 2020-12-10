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

    	   
 	    int n,q;
 	    cin>>n>>q;

 	    int t[30][n];
 	    for(int i = 0 ; i < n ; i++)
 	    	cin>>t[0][i], t[0][i]--;
 	    for(int j = 1 ; j < 30 ; j++){
 	    	for(int i = 0; i < n ; i++){
 	    		t[j][i] = t[j-1][t[j-1][i]];
 	    	}
 	    }   

 	    while(q--){
 	    	int x,k;
 	    	cin>>x>>k;
 	    	x--;
 	    	for(int g = 0 ; g < 30 ; g++){
 	    		if(k>>g&1)
 	    			x = t[g][x];


 	    	}
 	    	cout<<x+1<<'\n';
 	    }








return 0;
}