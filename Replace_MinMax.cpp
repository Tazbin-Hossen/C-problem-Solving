#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    ll minimum=INT_MAX,minIDx;
    ll maximum=INT_MIN,maxIDx;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {maximum=arr[i];minIDx=i;}
        if(arr[i]<minimum)
        {minimum=arr[i];maxIDx=i;}
    }
    swap(arr[minIDx],arr[maxIDx]);
    for(ll j=0;j<n;j++)
    { 
        cout<<arr[j]<<" ";
    }

    return 0;
}