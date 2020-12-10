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
char matrix[1002][1002];
char vis[1002][1002];
pii pa[1002][1002];
int n,m;
int startx,starty ,endx , endy;
bool b ;
std::vector<char> v;
pii pr[]={{0,1},{1,0},{0,-1},{-1,0}};
//--------------------------------------------
bool check(int i , int j)
{
	if(vis[i][j]==0 && i>=1 && i<=n && j>=1 && j<=m && (matrix[i][j]=='.' || matrix[i][j]=='B') &&b==false)
		return true;

	return false;
}


void dfs(int i , int j)
{

    queue<pii> q;
    q.push(mp(i,j));
    vis[i][j] = 1;
    while(!q.empty())
    {
        pii p = q.front();
        q.pop();

        //vis[p.fi][p.se] = 1;
        if(p.fi == endx && p.se == endy)
        {
            b = true;
            break;
        }
      
        for(pii pv : pr){
            int x = pv.fi;
            int y = pv.se;
            
            if(check(p.fi+x,p.se+y)){
              q.push(mp(p.fi+x,p.se+y));
              vis[p.fi+x][p.se+y] = 1;
              pa[p.fi+x][p.se+y] = mp(p.fi,p.se);       
            }
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


       
       cin>>n>>m;

       for(int i = 0 ; i < n ; i++)
       {
       		string st;
       		cin>>st;
       		for(int j = 0 ; j < m ; j++){
       			matrix[i+1][j+1] = st[j];
            if(st[j]=='A')
              startx = i+1,starty = j+1;
            if(st[j]=='B')
              endx = i+1 , endy = j+1; 
          }
       }
      
        b = false;
        pa[startx][starty] = {0,0};
        dfs(startx,starty);

       
        if(b == true)
        {
          cout<<"YES\n";
          int x = endx , y = endy;

          while(pa[x][y].fi != 0 && pa[x][y].se!=0)
          {
             int tx = x , ty = y;
              if(pa[x][y].se - y == 1)
                v.pb('L');
              else
              if(pa[x][y].se - y == -1)
                v.pb('R');
              else
              if(pa[x][y].fi - x == 1)
                v.pb('U');
              else
                v.pb('D');
              
              x = pa[tx][ty].fi;
              y = pa[tx][ty].se;
          }
          


          cout<<v.size()<<'\n';
          reverse(v.begin(),v.end());
          for(char x : v)
            cout<<x;

        }
        else
          cout<<"NO";








return 0;
}