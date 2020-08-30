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

       int n,m;
       cin>>n>>m;

       int k ; 
       cin>>k;

       int arr[n];
       int brr[m];
       for(int i = 0 ; i < n ; i++)
       	cin>>arr[i];
       for(int j = 0 ; j < m ; j++)
       	cin>>brr[j];

       sort(arr,arr+n , greater<int>());
       sort(brr,brr+m, greater<int>());

       int i = 0 , j = 0 ,count = 0;
       while(i < n && j < m)
       {
       		if(arr[i]+k >= brr[j] && arr[i]-k <= brr[j])
       		{
       			j++;
       			i++;
       			count++;
       		}
       		else
       		{
       			if(arr[i] > brr[j])
       				i++;
       			else
       				j++;
       		}
       }

       cout<<count;

             	     













return 0;
}