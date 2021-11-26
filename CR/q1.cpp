
// Sliding window
#include<bits/stdc++.h>
using namespace std;

bool check( map<char,int> freq)
{
    if(freq['1']>=1 && freq['2']>=1 && freq['3']>=1)
    return true;
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i=0,j=0,n=s.size();
        map<char,int> freq;
         int ans=INT_MAX;
        while(i<n)
        {
           while(j<n && check(freq)==true)
           {
               ans=min(ans,(i-j+1));
               freq[s[j]]--;
               j++;
           }

           freq[s[i]]++;
           i++;

        }
        if(ans!=INT_MAX)
         cout<<ans<<endl;
         else
         cout<<"0"<<endl;
    }
    return 0;
}