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
	ll a[n+1];
	for(int i=0; i<n;i++)
	{
		cin>>a[i];
	}
	ll ans=a[0],sum=0, sum_min=0,ans_l=0, ans_r=0, neg_pos=-1;
	for(int i=0; i<n;i++)
	{
		sum+=a[i];
		int cur= sum-sum_min;
		if(cur>ans)
		{
			ans= sum;
			ans_l= neg_pos+1;
			ans_r=i;
		}
		if(sum<sum_min){
			sum_min=sum;
			neg_pos=i;
		}
	}
	cout<<ans_l<<" "<<ans_r<<endl;
	return 0;
}