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
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);

            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}