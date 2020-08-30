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

        if(n == 1)
          cout<<1;
        else
          if(n < 4)
            cout<<"NO SOLUTION";
        else
          if(n == 4)
            cout<<"3 1 4 2";
        else
        {
          int k = 1;
          for(int i = 1 ;i <= n ; i++)
            if(i&1)
              cout<<k<<' ';
            else
            {
              cout<<k+(n+1)/2<<' ';
              k++;
            }

        }
	














return 0;
}