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

          
          int t;
          cin>>t;
          while(t--)
         {int a,b;cin>>a>>b;if(a==0 && b==0)cout<<"YES\n";else if(min(a,b)*2>=max(a,b) && ((a%3 == 0 && b%3 == 0 && a > 0 && b > 0)||(a%3==1 && b%3==2)||(a%3==2 && b%3==1)))cout<<"YES\n";else cout<<"NO\n";}
          

	














return 0;
}