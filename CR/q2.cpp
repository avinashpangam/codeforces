//binary search

#include<bits/stdc++.h>
using namespace std;

bool possible(int mid,int arr[],int k)
{
     int sum=0,st=0;
    for(int i=0;i,arr.size();i++)
    { 
        if(arr[i]>mid) return false;
        if(sum+arr[i]>mid)
        {
              st+=1;
              sum=0;
              sum+=arr[i];
        }
        else
        {
            sum+=arr[i];
        }

    }
    if(st>k)
    return false;
    return true;
}

int main()
{
    int k,n;
    cin>>k>>n;
    int arr[n];
    int mn=INT_MAX,sum=0;
    for(int i=0;i<n;i++)
    { cin>>arr[i];
       mn=min(arr[i],mn);
       sum+=arr[i];
    }

    int low=mn,high=sum,res=-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(possible(mid,arr,k))
        {
            res=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;
}