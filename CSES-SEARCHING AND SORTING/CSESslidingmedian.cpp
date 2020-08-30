/*--ILRS-- sr4saurabh  */
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;
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
//-----------------DONT CHANGE IT , WARNING UR HARD DISK MIGHT CRASH-------
typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> oset;
#define ordered_set tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
//----------------WARNING----WARNING-----WARNING-----WARNING----WARNING-----

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

       int n,k;
       cin>>n>>k;

        oset newset;

       int arr[n];
       for(int i = 0 ;i < n ;i++)
        cin>>arr[i];


       for(int i = 0 ; i < k-1 ; i++)
          newset.insert(mp(arr[i],i));
          
          int mid;
         if(k & 1)
         mid = k/2;
          else
          mid = k/2 - 1;

       for(int i = k-1 ; i < n ; i++)
       {
            newset.insert(mp(arr[i],i));
            cout<<(newset.find_by_order(mid)->fi)<<' ';
            newset.erase(mp(arr[i-k+1],i-k+1));

       }


       










return 0;
}