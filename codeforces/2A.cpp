/*
* I'm a Ghost
* Now you see me, now you don't
*/
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define mod 1000000007
#define inf ((ll)1e18)
#define eps 1e-9
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
using namespace std;
int main()
{
	// fast();
    ll n;
    cin>>n;
    ll m = -inf;
    string ans;
    map<string , ll> score , foo;
    vector<pair<string,ll>> arr(n); 
    for(ll i = 0 ; i < n ; i++ )
    {
    	cin>>arr[i].ff>>arr[i].ss;
    	foo[arr[i].ff] += arr[i].ss;
    }
    for(auto x : foo)
    	m = max(m , x.ss);
    for(ll i = 0 ; i < n ; i++ )
    {
    	score[arr[i].ff] += arr[i].ss ;
    	if(score[arr[i].ff] >= m && foo[arr[i].ff] >= m)
    	{
    		cout<<arr[i].ff<<endl;
    		return 0;
    	}
    }
}