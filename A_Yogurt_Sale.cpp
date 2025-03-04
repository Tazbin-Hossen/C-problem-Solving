#include<bits/stdc++.h>
#include<vector>
#define ll long long
using namespace std;
int main(){
    ll t; cin>>t;
    while(t--)
    {
        ll n,a,b; cin>>n>>a>>b;
        if(n>=2)
        {
            if(n%2==0)
            {
                ll first=(n/2)*b;
                ll second=n*a;
                ll answer=min(first,second);
                cout<<answer<<endl;
            }
            else
            {
                ll ans=n/2;
                ll single=n%2;
                ll first=(ans*b)+(single*a);
                ll second=n*a;
                ll answer=min(first,second);
                cout<<answer<<endl;
            }
        }
        else{cout<<n*a<<endl;}
    }
    return 0;
}