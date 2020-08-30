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

	     string st;
       cin>>st;

       vii arr(26,0);

       int n = st.size();

       for(int i = 0; i < n ;i++)
        arr[st[i]-'A']++;

        int e = 0 , o = 0;
       for(int i = 0; i < 26 ; i++)
       {
          if(arr[i]&1) o++;
          else e++;
       }

       if(o<=1)
       {
          string ans=""; char k = '-';
          for(int i = 0; i < 26 ;i++)
          {
              if(arr[i]&1) k = 'A' + i;
              int j = arr[i]/2;
              while(j--)
                ans.pb((char)('A'+i));

          }
          cout<<ans;
          if(k!='-')
            cout<<k;
          reverse(ans.begin(),ans.end());
          cout<<ans;

       }
       else
       {
          cout<<"NO SOLUTION\n";
       }

	   














return 0;
} 