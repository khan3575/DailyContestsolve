#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool cmp(pair<int,int> a, pair<int,int> b)
{
	return a.first<b.first;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	vector<pair<int,int> >v;
	int x;
	for (int i = 0; i < n; i++)
	{
		cin>>x;
		v.push_back({x,i});
	}
	sort(v.begin(),v.end(),cmp);
	int cnt=1;
	for(int i=0; i<n-1;i++)
	{
		if(v[i].second>v[i+1].second)
		{
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}