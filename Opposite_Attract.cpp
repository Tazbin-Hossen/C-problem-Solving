#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string arr[n];
        string ans;
        for(ll i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(char j :arr[n])
        {
            if(j=='1')
            {
                ans+='0';
            }
            else
            {
                ans+='1';
            }
        }
        cout<<ans<<endl;
        ans;
    }
    return 0;
}