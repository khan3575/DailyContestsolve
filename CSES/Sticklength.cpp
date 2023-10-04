#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int mid= a[n/2];

	ll sum= 0;
	for(int i=0; i<n;i++)
	{
		sum+= abs(a[i]-mid);
	}
	cout<<sum<<endl;
	return 0;
}