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

vector< string > ans;

//--------------------------------------------
void dfs(string &st,string curr ,int k , vii &vis , int n)
{
    curr.pb(st[k]);
    vis[k] = 1;
  
    if(curr.size()==n)
    {
       ans.pb(curr);
       return;
    }
      

    for(int i = 0; i < n;i++)
    {
      if(!vis[i]){
        dfs(st,curr,i,vis,n);
        vis[i]=0;
      }
        


    }

    
    

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

	     string st;
       cin>>st;
       sort(st.begin(),st.end());
       int n = st.size();
       string curr="";
       
       for(int i = 0; i < n ;i++){
          vii vis(n+1, 0);  
         dfs(st,curr,i,vis,n);
       }
       sort(ans.begin(),ans.end());
       int kk = 0;
       for(int i = 1; i < ans.size(); i++)
       {
          if(ans[i]!=ans[i-1])
            kk++;
       }
       
       cout<<kk+1<<'\n';cout<<ans[0]<<'\n';
      for(int i = 1; i < ans.size(); i++)
       {
          if(ans[i]!=ans[i-1])
             cout<<ans[i]<<'\n';
       }
       
	    














return 0;
}