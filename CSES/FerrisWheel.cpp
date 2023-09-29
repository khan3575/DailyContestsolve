#include<bits/stdc++.h>
using namespace std;
const int mx=1e6;
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   	int l=0,r=n-1;
   	int cnt=0;
   	while(l<=r)
   	{
   		int sum=a[l]+a[r];
   		if(sum>k)
   		{
   			r--;
   			cnt++;
   		}
   		else {
   			l++;
   			r--;
   			cnt++;
   		}
   	}
   	cout<<cnt<<endl;
    return 0;
}