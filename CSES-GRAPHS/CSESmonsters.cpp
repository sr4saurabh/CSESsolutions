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
int alicematrix[1001][1001];
int monstermatrix[1001][1001];
int n,m;
int vismonster[1001][1001];
int visalice[1001][1001];
pii moved[]={{1,0},{0,1},{-1,0},{0,-1}};
pii parent[1001][1001];
vpl monsters;
vpl alices;
int ansx = -1 , ansy = -1;
//--------------------------------------------
bool checkalice(int i , int j,int score)
{
	if(!visalice[i][j] && i >= 1 && i <= n && j <= m && j >=1 && alicematrix[i][j]!=-1 && (monstermatrix[i][j] > score+1))
		return true;
	return false;
}
bool checkmonster(int i , int j)
{
	if(!vismonster[i][j] && i >= 1 && i <= n && j <= m && j >=1 && monstermatrix[i][j]!=-1)
		return true;
	return false;
}
//--------------------------------------------
void bfsmonster()
{
	queue<pii> q;
	for(pii p : monsters)
	{
		q.push(p);
		vismonster[p.fi][p.se] = 1;
	}
	
	while(!q.empty()){

		pii p = q.front();
		q.pop();

		for(pii f : moved)
		{
			if(checkmonster(p.fi + f.fi , p.se + f.se)){
				vismonster[p.fi+f.fi][p.se+f.se] = 1;
				monstermatrix[p.fi+f.fi][p.se+f.se] = monstermatrix[p.fi][p.se]+1;
				q.push(mp(p.fi + f.fi , p.se + f.se));
			}
		}

	}

}
//-------------------------------------------
void bfsalice()
{
	queue<pii> q;
	for(pii p : alices)
	{
		q.push(mp(p.fi,p.se));
		visalice[p.fi][p.se] = 1;
		parent[p.fi][p.se].fi = -1;
		parent[p.fi][p.se].se = -1;
	}

	while(!q.empty()){
		
		pii p = q.front();
		q.pop();
		
		if(p.fi == 1 || p.fi == n || p.se == 1 || p.se == m)
		{
			ansx = p.fi; ansy = p.se; break;
		}
		
		for(pii f : moved){

			if(checkalice(p.fi + f.fi,p.se + f.se,alicematrix[p.fi][p.se])){

				visalice[p.fi+f.fi][p.se+f.se] = 1;
				parent[p.fi+f.fi][p.se+f.se] = p;
				alicematrix[p.fi+f.fi][p.se+f.se] = alicematrix[p.fi][p.se] + 1;
				q.push(mp(p.fi + f.fi,p.se + f.se));
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
       for(int i = 1 ; i <= n ; i++)
       {
       		string st;cin>>st;
       		for(int j = 1; j <= m ; j++)
       		{
       			int val;
       			if(st[j-1] == '.'){
       				monstermatrix[i][j] = alicematrix[i][j] = 9999; 
       			}
       			else
       			if(st[j-1] == '#'){
       				monstermatrix[i][j] = alicematrix[i][j] = -1;
       			}
       			else
       			if(st[j-1]=='M')
       			{
       				monstermatrix[i][j] = 0;
       				monsters.pb(mp(i,j));
       			}
       			else
       			{
       				alices.pb(mp(i,j));
       				alicematrix[i][j] = 0;
       			}
       		}
       }
        

       bfsmonster();
       bfsalice();

       vector<char>  ans;
       if(ansx == -1 && ansy == -1)
       	cout<<"NO";
       else{
       		cout<<"YES\n";
       		int x = ansx; int y = ansy;
	       	while(parent[x][y].fi!=-1 && parent[x][y].se!=-1){
	       		//ans.pb(mp(x,y));
	       		int tx = x; int ty = y;
	       		x = parent[tx][ty].fi; y = parent[tx][ty].se;
	       		if(x+1 == tx)
	       			ans.pb('D');
	       		else
	       		if(x-1 == tx)
	       			ans.pb('U');
	       		else
	       		if(y-1 == ty)
	       			ans.pb('L');
	       		else
	       			ans.pb('R');

	    	}

	    	reverse(ans.begin(),ans.end());
	    	cout<<ans.size()<<'\n';
	    	for(char k : ans)
	    		cout<<k;
       }








return 0;
}