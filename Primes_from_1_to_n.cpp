#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll n; cin>>n;
    bool isPrime=true;
    cout<<"2"<<" ";
    for(ll i=3;i<=n;i++)
    {
        for(ll j=2;j<i;j++)
        {
            if(i%j==0)
            {
                isPrime=false;
                break;
            }
            else
            {
              isPrime=true;
            }
        }
        if(isPrime==true)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}