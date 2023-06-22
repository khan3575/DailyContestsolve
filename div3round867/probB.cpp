#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    ll minus, plus;
    sort(a,a+n);
    minus = 1LL* a[0]*a[1];
    plus=  1LL* a[n-2]*a[n-1];
    cout<<max(minus, plus)<<endl;
    }
    return 0;

}