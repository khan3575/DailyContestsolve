#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int n = 1e6+5;
vector<ll> prime;
vector<bool> vis(n+1,false);
void seive()
{
	for(ll i=2; i<=n; i++)
	{
		if(!vis[i]){
			prime.push_back(i);
			for(ll j= i*i; j<=n; j+=i )
			{
				vis[j]=true;
			}
		}

	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	seive();
	int t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		for(ll i=l; i<=r; i++)
		{
			bool ok=true;
			for(int j=0; j<prime.size() && prime[j]*prime[j]<=i;  j++)
			{
				if(i%prime[j]==0)
				{
					ok=false;
					break;
				}
			}
			if(ok)
			{
				cout<<i<<'\n';
			}
		}
		cout<<'\n';
	}
	return 0;
}