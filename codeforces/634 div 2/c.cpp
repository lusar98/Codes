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
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n;
    	cin>>n;
    	ll arr[n];
    	map<ll,ll> foo;
    	for(ll i = 0 ; i < n ; i++ )
    	{
    		cin>>arr[i];
    		foo[arr[i]]++;
    	}
    	ll un = 0 , m = 0;
    	for(pair<ll,ll> x : foo)
    	{
    		m = max(m , x.ss);
    		un++;
    	}
    	if(un > m)
    	{
    		cout<<m<<endl;
    	}
    	else if(un == m)
    	{
    		cout<<m - 1<<endl;
    	}
    	else
    	{
    		cout<<un<<endl;
    	}
    }
}
