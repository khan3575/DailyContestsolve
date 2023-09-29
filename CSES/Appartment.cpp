#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	t=1;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int a[n+1],b[n+1];
		for(int i=0; i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0; i<m; i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+m);
		int cur=0,ans=0;
		for(int i=0; i<n;i++)
		{
			while(cur<n && a[cur]<b[i]-k){
			 cur++;
			}
			
			if(a[cur]>=b[i]-k && a[cur]<=b[i]+k && cur<n)
			{
				ans++;
				cur++;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}