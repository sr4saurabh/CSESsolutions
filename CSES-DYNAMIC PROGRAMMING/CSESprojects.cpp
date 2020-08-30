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
bool comp(const pair<pair<ll,ll>,ll> &a , const pair<pair<ll,ll>,ll> &b)
{
	return a.fi.se < b.fi.se;
}


//--------------------------------------------
int bsearch(vector<pair < pair<ll ,ll> , ll > > &vec , int end , int key)
{
	int l = 0 , r = end;
	int mid = -1 , ind = -1;
	if(l == r && vec[l].fi.se < key)
		return r;

	while(l <= r)
	{
	     mid = (l+r)/2;
		if(vec[mid].fi.se >= key)
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
	}

	return r;

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

      	     
       	int n;
       	cin>>n;

       	vector<pair < pair<ll ,ll> , ll > > v(n);
       	for(int i = 0 ; i < n ; i++)
       	{
       		int a,b,c;cin>>a>>b>>c;
       		v[i] = mp(mp(a,b),c);
       	}

       	sort(v.begin(),v.end(),comp);


       	ll dp[n+1]={0};
       	dp[0] = v[0].se;

       	for(int i = 1; i < n ;i++)
       	{
       		int ind = bsearch(v,i-1,v[i].fi.fi);
       		if(ind == -1)
       			dp[i] = max(dp[i-1],v[i].se);
       		else
       			dp[i] = max(dp[i-1],dp[ind] + v[i].se);
       	}

       	cout<<dp[n-1];











return 0;
}