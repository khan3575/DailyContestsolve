#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		ll sum=0;
		for(int i=0; i<n;i++)
		{
			cin>>a[i];
			sum+= abs(a[i]);
		}
		int neg_seg=0, pos_seg=0;
        bool ok=false
		
		cout<<sum<<" ";
		if(neg_seg>pos_seg)
		{
			cout<<pos_seg+1<<endl;
		}
		else cout<<neg_seg<<endl;
	}

	return 0;

}