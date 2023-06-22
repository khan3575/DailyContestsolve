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
        if(n==1)
        {
            cout<<1<<endl;
        }
        else if(n&1)
        {
            cout<<-1<<endl;
        }
        else {
            for(int i=n; i>=1; i-=2)
            {
                cout<<i<<" "<<n-i+1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}