#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll arr[n];
    for(ll m=0;m<n;m++)
    {
        cin>>arr[m];
    }
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=0;j<n-i-1;j++)
        {
           if(arr[j]>arr[j+1])
           {
            for(ll mm=0;mm<n;mm++)
            {
                swap(arr[j],arr[j+1]);
                cout<<arr[mm]<<" ";
            }
           }
           cout<<endl;
        }
    }
    return 0;
}