#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
	int res;
    if(n>k && k==2)
	{
		cout<<"-1\n";
		return 0;
	}
    if(n<k)
        cout<<"-1"<<endl;
    else{
    res = k-1;
    int val = 2*(n-k);
    res += val;
    cout<<res<<endl;
    }
    return 0;
}

