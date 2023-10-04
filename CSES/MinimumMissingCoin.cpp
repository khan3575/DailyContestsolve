#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=2e5+5;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	ll a[n+1];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	ll mx=1;
	for(int i=0; i<n;i++)
	{
		if(mx<a[i])
		{
			cout<<mx<<endl;
			return 0;
		}
		mx+=a[i];
	}
	cout<<mx<<endl;
	return 0;
}