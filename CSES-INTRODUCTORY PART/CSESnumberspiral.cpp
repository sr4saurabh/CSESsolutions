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
void helperx(ll x , ll y)
{
    if(!(x&1))
      cout<<x*x - y + 1;
    else
      cout<<(x-1)*(x-1)+y;

}

//--------------------------------------------
void helpery(ll x ,ll y)
{
    if(!(y&1))
      cout<<(y-1)*(y-1) + x;
    else
      cout<<y*y - x + 1;


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

	
	     int t;
       cin>>t;
       while(t--)
       {
            ll x,y;
            cin>>x>>y;
            
            if(x>=y)
              helperx(x,y);
            else
              helpery(x,y);
            cout<<'\n';

       }














return 0;
}