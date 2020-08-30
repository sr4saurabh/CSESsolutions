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
int bsearch(vll &search , ll key)
{
	int l = 0, r = search.size()-1;
	while(l < r)
	{
		int mid = (l+r)/2;
		if(search[mid] >= key)
			r = mid;
		else
			l = mid+1;
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

      int n;cin>>n;
      vll arr(n+1);
      for(int i = 1 ; i<= n ;i++)
      cin>>arr[i];

  	 vll aux(n+1,1);
  	 vll search(n+1,1e11 + 5);
  	 search[0] = -1;

  	 for(int i = 1 ; i <= n ;i++)
  	 {
  	 	int ind = bsearch(search,arr[i]);
  	 	search[ind] = arr[i];
  	 	aux[i] = ind;
  	 }

  	 cout<<*max_element(aux.begin(),aux.end());













return 0;
}