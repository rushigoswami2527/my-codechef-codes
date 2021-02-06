#include<iostream>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int ans=0;
    while(n--)
    {
        long long int m;
        cin>>m;
        if(m%k==0)
        ans++;
    }
    cout<<ans;
}
