/*
hack452.cpp
This new file Created on 17-01-2017 at 22:09:26
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
ll gcd(ll a,ll b)
{
	if(a<b)
		return gcd(b,a);
	if(a%b==0)
		return b;
	return gcd(b,a%b);
}
ll a[100005];
ll l[100005];
ll r[100005];
int main()
{
	ll i,j=-1,k,n;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	if(n==1)
	{
		cout<<a[0]+1<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<max(a[0],a[1])<<endl;
		return 0;
	}
	ll cur = a[0];
	 l[0] = cur;
	for(i=1;i<n;i++)
	{
		 cur = gcd(cur,a[i]);
		 l[i] = cur;
	}
	r[n-1] = a[n-1];
	cur = a[n-1];
	for(i=n-2;i>=0;i--)
	{
		cur = gcd(cur,a[i]);
		r[i] = cur;
	}
    ll res;
    //cout<<r[1]<<endl;
    if(a[0] % r[1] !=0)
		cout<<r[1]<<endl;
	else if(a[n-1] % l[n-2] !=0)
		cout<<l[n-2]<<endl;
	else
	{
		for(i=1;i<=n-2;i++)
		{
			res = gcd(l[i-1],r[i+1]);
			if(a[i] % res!=0)
			{
				cout<<res<<endl;
				return 0;
			}
		}
	}
	return 0;
}
