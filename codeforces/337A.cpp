/*-----rk_98-----*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
    //fast();
    ll n , m;
    cin>>n>>m;
    ll arr[m];
    for(ll i = 0 ; i < m ; i++)
    	cin>>arr[i];
    sort(arr, arr + m);
    ll diff = mod;
    for(ll i = 0 ; i + n <= m ; i++)
    {
    	diff = min(diff , arr[n -1 + i] - arr[i]);
    }
    cout<<diff<<endl;
    
}