
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int k;
    cin>>k;
    while(k--){
    int n, t;
    cin>>n>>t;
    int a[n],b[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int trem=t;
    int ent=0;
    int index=-1;
    for(int i=0; i<n;i++)
    {
        if(a[i]<=trem && ent<b[i])
        {
            ent=max(ent,b[i]);
            index= i+1;
        }
        trem--;
    }
    cout<<index<<endl;
    }
    return 0;
}