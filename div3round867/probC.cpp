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
       int sum=0;
       
       for(int i=1; i<=n;i++)
       {
        sum= (sum+i)%n;
        cout<<sum<<" ";
        a[i]= sum%n+1;
       }
       cout<<endl;
       
       set<int> st;
       bool ok= true;
       for(int i=1; i<=n;i++)
       {
            if(st.find(a[i])==st.end())
            {
                st.insert(a[i]);
            }
            else {
                ok=false;
                break;
            }
       }
       

    }
    
    return 0;
}