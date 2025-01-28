#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll j=0;j<n-1;j++)
    {
        for(ll k=0;k<n-j-1;k++)
        {
            if(arr[k]>arr[k+1])
            {
                swap(arr[k],arr[k+1]);
            }
        }
    }
    for(ll m=0;m<n;m++)
    {
        cout<<arr[m]<<" ";
    }
    return 0;
}