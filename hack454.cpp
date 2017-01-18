/*
hack454.cpp
This new file Created on 17-01-2017 at 23:10:28
Created By Gautam Kumar
*/

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


ll modpow(ll a,ll b, ll c)
{
	if(b==0)
	return 1;
	if(b==1)
	return a;
	ll temp = modpow(a,b/2,c);
	temp*=temp;
	temp%=c;
	if(b%2==1)
		temp*=a;
	temp%=c;
	return temp;
}
ll n,a,b,q;
vector<int>val;
int main()
{
	cin>>n>>a>>b>>q;
	ll i,j,k;
	for(i=1;i<n;i++)
	{
		cin>>j;
		val.push_back(j);
	}
	int f=0;
	while(q--)
	{
		ll qt,l,r;
		cin>>qt>>l>>r;
		if(qt==1)
		{
			val[l] = r;
		}
		else
		{

		}

	}
	return 0;
}
