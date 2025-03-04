#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll a; cin>>a;
        ll sum=(a*(a+1))/2;
        for(ll i=0;i<=a;i++)
        {
            ll preAns=pow(2,i);
            cout<<preAns<<" ";
            if(preAns>=1&&preAns<=a)
            {
                sum-=(2*i);
            }
            else{sum+=i;}
            preAns=0;
        }
        cout<<sum<<endl;
    }
    return 0;
}