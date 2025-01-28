#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        if(n==0)
        {
            cout<<"0"<<" ";
        }
        else{while(n>0)
        {
           ll x=n%10;
           cout<<x<<" ";
            n=n/10;
        }
        }
        cout<<endl;
    }
    return 0;
}