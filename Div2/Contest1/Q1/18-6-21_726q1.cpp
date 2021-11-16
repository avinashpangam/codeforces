#include<bits/stdc++.h>
using namespace std;
int dp[51];
int count(int num)
{
    if(num==0)
    {
        return 1;
    }
    if(num<0)
    return 0;
    if(dp[num]!=-1)
    return dp[num];
    for(int i=1;i*i<=num;i++)
    {
        return dp[num]=count(num-(i*i))+count(num);
    }
    return dp[num];
}
int main()
{
    int num;
    cin>>num;
    memset(dp,-1,sizeof(dp));
    return count(num);

}