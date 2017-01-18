#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int r1=0,r2=0;
	while(a)
	{
		r1=r1*10+a%10;
		a/=10;
	}
	while(b)
	{
		r2=r2*10+b%10;
		b/=10;
	}
	int t1 = r1, t2 = r2,d1=0,d2=0;
	while(t1)
	{
		t1/=10;
		d1++;
	}
	while(t2)
	{
		t2/=10;
		d2++;
	}
	while(r1&&r2)
	{
		int v1 = r1%10;
		int v2 = r2%10;
		r1/=10;
		r2/=10;
		if(v1==v2)
			cout<<"0";
		else
			cout<<"1";
	}
	while(r1)
	{
		cout<<r1%10;
		r1/=10;
	}
	while(r2)
	{
		cout<<r2%10;
		r2/=10;
	}
}
