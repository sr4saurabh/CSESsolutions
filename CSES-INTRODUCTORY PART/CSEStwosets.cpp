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

        ll n;
        cin>>n;
        if(n <= 2)
          cout<<"NO";
        else
          if(n == 3)
            cout<<"YES\n2\n1 2\n1\n3";
        else  
        if(n%4 == 0)
        {
            vii v1,v2;
            for(int i = 1; i <= n ;i++)
            {
              if((i-1)%4 == 0 || i%4==0)
                v1.pb(i);
              else
                v2.pb(i);
            }

            cout<<"YES\n";
            cout<<v1.size()<<'\n';
            for(int x : v1)
              cout<<x<<' ';
            cout<<'\n'<<v2.size()<<'\n';
            for(int x : v2)
              cout<<x<<' ';
            cout<<'\n';
        }	
        else
          if((n+1)%4 == 0)
          {
            ll sum = n*(n+1)/4;
            ll curr = 0;
            vll flag(n+1 , 0);
              for(int i = 1 ; i <= n && curr < sum ;i++){
                curr = curr + i;
                flag[i]=1;
              }

              flag[curr - sum] = 0; 
              vll v1,v2;
              for(int i = 1; i <= n; i++)
                if(flag[i])
                  v1.pb(i);
                else
                  v2.pb(i);
                cout<<"YES\n";
            cout<<v1.size()<<'\n';
            for(int x : v1)
              cout<<x<<' ';
            cout<<'\n'<<v2.size()<<'\n';
            for(int x : v2)
              cout<<x<<' ';
            cout<<'\n';
          } 
        else
          cout<<"NO";
	














return 0;
}