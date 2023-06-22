#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,k;
    cin>>n>>k;
    int a[n+1];
    
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    double sum, tot=0;
    for(int i=0; i<n-k+1; i++)
    {
        sum=0;
        for(int j=i; j<=n;j++)
        {
            sum+=a[j];
            if(sum/(j-i+1)>tot && (j-i+1)>=k)
            {
                tot= sum /(j-i+1);
            }
        }
    }
    cout<<setprecision(8)<<tot+1e-9<<endl;
    return 0;
}  