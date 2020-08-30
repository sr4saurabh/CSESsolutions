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

 		int x,n;
 		cin>>x>>n;
 		set<int> s;
 		int arr[n];
 		int brr[n+2];
 		s.insert(0);
 		s.insert(x);
 		for(int i = n-1 ; i >= 0 ; i--){
 			cin>>arr[i];
 			s.insert(arr[i]);
 			brr[n-i] = arr[i];
 		}

 		brr[0] = 0;
 		brr[n+1] = x;
 		int ma = 0;
 		sort(brr,brr+n+2);
 		for(int i = 1; i <= n+1 ; i++){

 			ma = max(ma , brr[i]-brr[i-1]);
 		}

 		vii v;
 		v.pb(ma);
 		for(int i = 0 ; i < n ; i++)
 		{
 			auto it = s.lower_bound(arr[i]);
 			it--;
 			auto it2 = s.upper_bound(arr[i]);
 			int diff1 = *it2 - *it;
 			ma = (max(diff1,ma));
 			v.pb(ma);
 			s.erase(s.find(arr[i]));
 		}

 		reverse(v.begin(),v.end());

 		for(int y = 1 ; y < v.size() ; y++)
 			cout<<v[y]<<' ';















return 0;
}