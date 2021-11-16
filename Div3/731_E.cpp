#include<bits/stdc++.h>
using namespace std;
int help(int temp,int p,int cur)
{
    int x=temp+(abs(p-cur));
    return x;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int> ans;
        int a[k],t[k];
     
        for(int i=0;i<k;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>t[i];
        }
        for(int i=1;i<=n;i++)
        {
               int m=INT_MAX;
            for(int j=0;j<k;j++)
            {
                m=min(m,help(t[j],a[j],i));
            }
            ans.push_back(m);

        }
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    }
    return 0;
}