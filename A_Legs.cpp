#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    ll count=0;
    while(t--)
    {
        ll n; cin>>n;
        while(n>0)
        {
            if(n>=4)
            {
                count+=(n/4);
                ll div=n/4;
                n=n-(div*4);
            }
            else
            {
                count+=(n/2);
                ll div2=n/2;
                n=n-(2*div2);
            }
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}