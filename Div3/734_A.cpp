#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int k=n/3;
        if(k+(2*k)==n)
        cout<<k<<" "<<k<<endl;
        else if(k+2*k<n)
        {
            if(n-(k+2*k)==2)
              cout<<k<<" "<<k+1<<endl;
              else
              cout<<k+1<<" "<<k<<endl;
        }
    }
    return 0;
}
