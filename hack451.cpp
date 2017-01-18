/*
hack451.cpp
This new file Created on 17-01-2017 at 22:00:20
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
int a[100];
int v[100];
int r[100];

int main()
{
	int n;
	cin>>n;
	int i,j,k;
	for(i=1;i<=n;i++)
		{
			cin>>a[i];
			v[i] = a[i];
			r[a[i]] = i;
		}
	for(i=1;i<=n;i++)
	{
		int val = r[i];
		cout<<r[val]<<endl;

	}

	return 0;
}
