#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[105]={0};
        int mx=0;
        for(int i=0; i<n;i++)
        {
            int x;
            cin>>x;
            a[x]++;
            mx= max(mx,x);
        }
        int ok=1;
        for(int i=0; i<=mx; i++)
        {
            cout<<a[i]<<" ";
            ok&= a[i];
        }
        if(ok)
        {
            cout<<"YES\n";
        }
        else cout<<"NO\n";

        

    }
}