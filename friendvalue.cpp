#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct pupil
{
	vector<long long int>v;
	long long int cnt;
}a[100005];
//vector<vector<long long int> >a(100005);
vector<long long int>component;
long long int vis[100005];
//long long int cnt[100005];
long long int dfs(long long int src)
{
	if(vis[src] == 1)
		return 0;
	vis[src] = 1;
	long long int q = 0;
	long long int i;
	for(i=0;i<a[src].v.size();++i)
	{
		if(vis[a[src].v[i]]==0)
			q += 1 + dfs(a[src].v[i]);
	}
	a[src].cnt = q;
	return q;
}
bool compare(const long long int& p1, const long long int& p2)
{
	return p1 > p2;
}
int main()
{
	//return 0;
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int m,n;
		cin>>n>>m;
		long long int i,j,k;
		ll res = 0;
		for(i=0;i<100005;i++)
			a[i].cnt = 0;
		for(i=0;i<100005;i++)
			vis[i] = 0;
		for(i=0;i<100005;i++)
			a[i].v.clear();
		component.clear();
		for(i=0;i<m;i++)
		{
			cin>>j>>k;
            a[j].v.push_back(k);
            a[k].v.push_back(j);
		}
		for(i=1;i<=n;i++)
		{
			if(vis[i]==0)
				{
					a[i].cnt = dfs(i);
					if(a[i].cnt!=0)
					component.push_back(1+a[i].cnt);
				}
		}
        sort(component.begin(),component.end(),compare);
        vector<long long int>::iterator itr = component.begin();
        for(;itr!=component.end();++itr)
			cout<<*itr<<" ";
		cout<<endl;
		continue;

        ll spare = 0;
        k=0;
        for(;itr!=component.end();++itr)
		{

			k = *itr;
			ll m1 = k-1;
			m1 *= spare;
			res += m1;//(ll)((k-1)*spare);
			//cout<<k<<endl;
			ll v = (k-1);
			v *= (k);
			v *= (k+1);
			v = v/3;
			res += v;
			m -= ((*itr) - 1);
			m1 = k;
			m1 *= (k-1);
			spare += m1;
		}
		//res += spare;

		//cout<<res<<" "<<m<<" "<<spare<<endl;
		ll prt = m;
		prt *= spare;
		res += prt;
		cout<<res<<endl;
	}
	return 0;
}
