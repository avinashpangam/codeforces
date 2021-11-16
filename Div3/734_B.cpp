#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
       int cur=0;
       int l=s.size();
        int mp[26]={0};
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]-'a']++;
           
        }
          for(int i=0;i<26;i++)
          {
              if(mp[i]>2)
            {
                cur+=(mp[i]-2);   
            }
          }
          //cout<<cur<<endl;
         cout<<((l-cur)/2)<<endl;
    }
    return 0;
}